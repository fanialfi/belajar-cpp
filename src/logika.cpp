#include <iostream>

int main() {
  short a = 3;
  short b = 2;

  bool hasil;

  std::cout << "a : " << a << "\nb : " << b << std::endl << std::endl;

  // operator logika = (AND, OR, NOT)

  // NOT (!)
  std::cout << "logika NOT" << std::endl;
  hasil = !(a == 3);
  std::cout << "!(a == 3) : " << hasil << std::endl;
  std::cout << std::endl;

  // AND (and / &&) : untuk menghasilkan true, kedua nilai harus true
  std::cout << "logika AND" << std::endl;
  hasil = (a == 3) && (b == 2); // true and true = true
  std::cout << "(a == 3) and (b == 2) : " << hasil << std::endl;

  hasil = (a == 3) && (b == 3); // true and false = false
  std::cout << "(a == 3) and (b == 3) : " << hasil << std::endl;

  hasil = (a == 2) && (b == 2); // false and true = false
  std::cout << "(a == 2) and (b == 2) : " << hasil << std::endl;

  hasil = (a == 5) && (b == 5); // false and false = false
  std::cout << "(a == 5) and (b == 5) : " << hasil << std::endl;
  std::cout << std::endl;

  // OR (or / || : untuk menghasilkan true, salah satu nilai harus true
  std::cout << "logika OR" << std::endl;
  hasil = (a == 3) || (b == 2); // true and true = true
  std::cout << "(a == 3) or (b == 2) : " << hasil << std::endl;

  hasil = (a == 3) || (b == 3); // true or false = false
  std::cout << "(a == 3) or (b == 3) : " << hasil << std::endl;

  hasil = (a == 2) || (b == 2); // false or true = false
  std::cout << "(a == 2) or (b == 2) : " << hasil << std::endl;

  hasil = (a == 5) || (b == 5); // false or false = false
  std::cout << "(a == 5) or (b == 5) : " << hasil << std::endl;
  return 0;
}