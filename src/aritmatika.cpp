#include <iostream>

using namespace std;

int main() {
  int a = 6;
  int b = 4;

  float hasil;
  // operatornya (+,-,*,/,%)

  // penjumplahan
  hasil = a + b;
  std::cout << a << " + " << b << " = " << hasil << std::endl;

  // pengurangan
  hasil = a - b;
  std::cout << a << " - " << b << " = " << hasil << std::endl;

  // perkalian
  hasil = a * b;
  std::cout << a << " * " << b << " = " << hasil << std::endl;

  // pembagian
  /*
    untuk operasi yang menghasilkan bilangan float / double,
    tipe data salah satu variabel-nya juga harus float / double,
    terus tipe data tempat penyimpanan hasil kalkulasi juga harus float / double
  */
  hasil = a / b;
  std::cout << a << " / " << b << " = " << hasil << std::endl;

  // modulus ( sisa bagi )
  /*
    sedangkan untuk modulus, semua tipe datanya harus sama
  */
  hasil = a % b;
  std::cout << a << " % " << b << " = " << hasil << std::endl;

  // urutan eksekusi menggunakan kurung
  // jika tidak menggunakan kurung 
  // urutan eksekusinya adalah 
  // (),*, /, +, -
  hasil = (a + b) * a;
  std::cout << hasil << std::endl;


  // increment operator
  /*
    jika menggunakan post-increment (a++)
    maka cara kerjanya adalah mereturn valuenya dulu,
    baru kemudian di increment;

    jika menggunakan pre-increment (++a)
    maka cara kerjanya adalah increment dulu valuenya,
    baru kemudian di return;
  */

  // post-increment
  hasil = a++;
  std::cout << "sebelumnya : " << a << "\nsesudah : " << hasil << std::endl;

  // pre-increment
  a = 6;
  hasil = ++a;
  std::cout << "sebelumnya : " << a << "\nsesudah : " << hasil << std::endl;

  // decrement operator
  /*
    untuk decrement operator juga sama seperti increment operator;
   */
   // hasil = a--;
   // std::cout << hasil << std::endl;
  return 0;
}