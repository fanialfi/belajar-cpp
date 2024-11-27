#include <iostream>
#include "../headers/randomNumber.h"
#include <time.h>
#include <cstdlib>

int main() {
  // Menginisialisasi seed untuk random number generator
  std::srand(std::time(0));

  unsigned short a;
  unsigned short randomNumber = generateRandomNumber();

  std::cout << "tebak angka dari 1 sampai 10 : ";
  std::cin >> a;

  if (a == randomNumber) {
    std::cout << "\nselamat tebakan anda benar\n";
    std::cout << "nomor computer : " << randomNumber << std::endl;
    std::cout << "nomor kamu : " << a << std::endl;
  }
  else {
    std::cout << "\nmaaf tebakan kamu salah\n";
    std::cout << "nomor computer : " << randomNumber << std::endl;
    std::cout << "nomor kamu : " << a << std::endl;
  }

  std::cout << "\nEND GAME\n";
  return 0;
}