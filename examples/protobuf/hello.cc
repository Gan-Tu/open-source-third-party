#include "examples/protobuf/hello.h"

#include <fstream>
#include <iostream>

Person CreatePerson(absl::string_view name) {
  Person p;
  p.set_name(name.data());
  return p;
}