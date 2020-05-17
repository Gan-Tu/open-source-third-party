#include <fstream>
#include <iostream>

#include "examples/protobuf/hello.h"

int main(int argc, char const *argv[]) {
  std::string my_name = "Gan";
  std::string filename = "gan_person.pb";

  Person person = CreatePerson(my_name);

  std::ofstream outfile;
  outfile.open(filename, std::ios::out | std::ios::trunc);
  person.SerializeToOstream(&outfile);
  outfile.close();

  std::ifstream infile;
  infile.open(filename, std::ios::in);
  Person gan;
  gan.ParseFromIstream(&infile);
  infile.close();

  std::cout << "hello " << gan.name() << std::endl;

  return 0;
}