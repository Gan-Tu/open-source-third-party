#include <iostream>

#include "inih/INIReader.h"

int main() {
  INIReader reader("./examples/data/test.config");

  if (reader.ParseError() < 0) {
    std::cout << "Can't load 'test.config'\n";
    return 1;
  }
  std::cout << "Config loaded from 'test.config': version="
            << reader.GetInteger("protocol", "version", -1)
            << ", name=" << reader.Get("user", "name", "UNKNOWN")
            << ", email=" << reader.Get("user", "email", "UNKNOWN")
            << ", pi=" << reader.GetReal("user", "pi", -1)
            << ", active=" << reader.GetBoolean("user", "active", true) << "\n";
  std::cout << "Has values: user.name=" << reader.HasValue("user", "name")
            << ", user.nose=" << reader.HasValue("user", "nose") << "\n";
  std::cout << "Has sections: user=" << reader.HasSection("user")
            << ", fizz=" << reader.HasSection("fizz") << "\n";
  return 0;
}