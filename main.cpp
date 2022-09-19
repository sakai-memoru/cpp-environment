#include <iostream>
#include <string>

using namespace std;

string getMessage() {
  return "c++";
}

int main() {
  string name = getMessage();
  std::cout << "Hello, " << name << " !!\n";
  return 0;
}