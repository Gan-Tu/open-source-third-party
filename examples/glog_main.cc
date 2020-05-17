#include <vector>

#include "glog/logging.h"
#include "glog/stl_logging.h"

// For more, see: http://rpg.ifi.uzh.ch/docs/glog.html
int main(int argc, char* argv[]) {
  google::InitGoogleLogging(/*program_name=*/argv[0]);

  // Log INFO and WARNING to console
  FLAGS_logtostderr = true;

  LOG(INFO) << "Hello, world!";
  LOG(WARNING) << "some warnings";
  LOG(ERROR) << "some errors";

  // CHECK_EQ("1", "2");

  // logging STL containers.
  std::vector<int> x;
  x.push_back(1);
  x.push_back(2);
  x.push_back(3);
  LOG(INFO) << "Integer arrays: " << x;

  LOG(FATAL) << "crash program on fatal errors";

  return 0;
}