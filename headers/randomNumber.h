#include <iostream>
#include <cstdlib> // untuk rand() dan srand()
#include <ctime>   // untuk time()

// Function untuk menghasilkan angka acak antara 1 sampai 10
int generateRandomNumber() {
  return (std::rand() % 10) + 1; // (rand() % range) + min_value
}