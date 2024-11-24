#include <iostream>

using namespace std;

int main() {
  int a; // disebut deklarasi varaibel dan nilai default-nya adalah zero value int (0)

  cout << a << endl;
  a = 10;
  cout << a << endl;

  int b;
  cout << "masukkan nilai : ";
  cin >> b; // cin akan membaca angka dari input kemudian mengabaikan karakter newline
  cout << "nilai yang anda masukkan adalah : " << b << endl;

  cin.ignore(100, '\n');

  int c;
  cout << "masukkan nilai : ";
  c = cin.get(); // cin.get() memcoba membaca 1 input dari console, tapi karena di buffer sudah ada karakter newline (\n) yang ditinggalkan oleh cin >> b, maka cin.get() langsung membaca karakter itu
  cout << "nilai yang anda masukkan adalah : " << c << endl;
}

/*
  operator << dan >> adalah artinya memasukkan sesuatu sesuai arah panahnya
  jika arah panahnya << artinya memasukkan nilai di kanan ke kiri
  jika arah panahnya >> artinya memasukkan nilai di kiri ke kanan
 */