#include "glog/logging.h"
#include "yaml-cpp/yaml.h"

int main(int argc, char* argv[]) {
  google::InitGoogleLogging(/*program_name=*/argv[0]);
  FLAGS_logtostderr = true;

  YAML::Node node;
  try {
    node = YAML::LoadFile("./examples/data/test.yaml");
  } catch (YAML::ParserException& e) {
    LOG(ERROR) << "Failed to parse file: " << e.msg;
    return 1;
  } catch (YAML::BadFile& e) {
    LOG(ERROR) << "Failed to read file: " << e.msg;
    return 2;
  }

  LOG(INFO) << "bool: " << node["bool"].as<bool>();
  LOG(INFO) << "integer: " << node["integer"].as<int>();
  LOG(INFO) << "pi: " << node["pi"].as<float>();
  LOG(INFO) << "hello: " << node["hello"].as<std::string>();
  for (int i = 0; i < node["items"].size(); i++) {
    LOG(INFO) << "items #" << i << ": " << node["items"][i].as<std::string>();
  }
  for (auto it = node["maps"].begin(); it != node["maps"].end(); ++it) {
    LOG(INFO) << "maps: {" << it->first.as<std::string>() << ": "
              << it->second.as<std::string>() << "}";
  }

  return 0;
}