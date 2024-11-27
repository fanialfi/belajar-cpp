#include <iostream>

int main() {
  short a = 5;
  short b = 6;
  bool hasil1, hasil2, hasil3, hasil4, hasil5, hasil6;

  // komparasi / relation expression

  // komparasi sebanding (==)
  hasil1 = a == b;
  // komparasi tidak sebanding (!=)
  hasil2 = a != b;
  // kurang dari (<)
  hasil3 = a < b;
  // lebih dari (>)
  hasil4 = a > b;
  // kurang dari sama dengan (<=)
  hasil5 = a <= b;
  // lebih dari sama dengan (>=)
  hasil6 = a >= b;


  std::cout << hasil1 << std::endl;
  std::cout << hasil2 << std::endl;
  std::cout << hasil3 << std::endl;
  std::cout << hasil4 << std::endl;
  std::cout << hasil5 << std::endl;
  std::cout << hasil6 << std::endl;
  return 0;
}