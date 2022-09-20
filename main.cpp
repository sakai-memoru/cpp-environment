#include <iostream>
#include <string>

using namespace std;

string getMessage() {
  return "c++";
}

int main() {
  string name = getMessage();
  cout << "Hello, " + name + " !!\n";
  return 0;
}