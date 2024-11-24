#include <iostream>
#include <limits> // perlu diimport karena numeric_limits memerlukan

// using namespace std;

int main() {
  // bilangan bulat
  int a = 1; // 32bit
  // int a = 2147483649; //  karena nilai-nya melebihi dari nilai maksimal, maka akan diflip ke nilai negatif
  std::cout << "isi dari variabel a : " << a << std::endl;
  std::cout << "besar data variabel a : " << sizeof(a) << " bytes" << std::endl;
  std::cout << "nilai maksimal dari variabel a : " << std::numeric_limits<int>::max() << std::endl;
  std::cout << "nilai minimal dari variabel a : " << std::numeric_limits<int>::min() << std::endl << std::endl;
  unsigned int aa = 1; // 32bit
  std::cout << "isi dari variabel aa : " << aa << std::endl;
  std::cout << "besar data variabel aa : " << sizeof(aa) << " bytes" << std::endl;
  std::cout << "nilai maksimal dari variabel aa : " << std::numeric_limits<unsigned int>::max() << std::endl;
  std::cout << "nilai minimal dari variabel aa : " << std::numeric_limits<unsigned int>::min() << std::endl << std::endl;

  // bilangan bulat
  long b = 6; // 64bit
  std::cout << "isi dari variabel b : " << b << std::endl;
  std::cout << "besar data varaiabel b : " << sizeof(b) << " bytes" << std::endl;
  std::cout << "nilai maksimal variabel b : " << std::numeric_limits<long>::max() << std::endl;
  std::cout << "nilai minimal variabel b : " << std::numeric_limits<long>::min() << std::endl << std::endl;


  // bilangan bulat
  short c = 7; // 16bit
  std::cout << "isi dari variabel c : " << c << std::endl;
  std::cout << "besar data variabel c : " << sizeof(c) << " bytes" << std::endl;
  std::cout << "nilai maksimal variabel c : " << std::numeric_limits<short>::max() << std::endl;
  std::cout << "nilai minimal variabel c : " << std::numeric_limits<short>::min() << std::endl << std::endl;

  // bilangan desimal
  float d = 1.2; // 32bit
  std::cout << "isi dari variabel d : " << d << std::endl;
  std::cout << "besar data variabel d : " << sizeof(d) << " bytes" << std::endl;
  std::cout << "nilai maksimal variabel d : " << std::numeric_limits<float>::max() << std::endl;
  std::cout << "nilai minimal variabel d : " << std::numeric_limits<float>::min() << std::endl << std::endl;

  // bilangan desimal
  double e = 2.3; // 64bit
  std::cout << "isi dari variabel e : " << e << std::endl;
  std::cout << "besar data varaibel e : " << sizeof(e) << " bytes" << std::endl;
  std::cout << "nilai maksimal varaiabel e : " << std::numeric_limits<double>::max() << std::endl;
  std::cout << "nilai minimal varaibel e : " << std::numeric_limits<double>::min() << std::endl << std::endl;

  // character 
  char f = 'a'; // 8bit
  std::cout << "isi dari variabel f : " << f << std::endl;
  std::cout << "besar data variabel f : " << sizeof(f) << " bytes" << std::endl;
  std::cout << "nilai maksimal variabel f : " << std::numeric_limits<char>::max() << std::endl;
  std::cout << "nilai minimal variabel f : " << std::numeric_limits<char>::min() << std::endl << std::endl;

  // boolean (true/false)
  bool g = true; // 8bit
  std::cout << "isi dari variabel g : " << g << std::endl;
  std::cout << "besar data variabel g : " << sizeof(g) << " bytes" << std::endl;
  std::cout << "nilai maksimal varaibel g : " << std::numeric_limits<bool>::max() << std::endl;
  std::cout << "nilai minimal varaibel g : " << std::numeric_limits<bool>::min() << std::endl << std::endl;
  return 0;
}

/*
  1 byte = 8 bit
  memori management itu memakai satuan byte

  8 bit =
  [0][0][0][0][0][0][0][0] = 1 byte

  4 byte * 8 = 32
  [0][0][0][0][0][0][0][0] * 4 = 32
  untuk integer bagian depan digunakan sebagai tanda +/- jadi tinggal 31 bit
  jadi 2 pangkat 31 => 2147483648
  karena dimulai dari 0 = 2147483647 (nilai maksimal dari integer)
  karena 0 sudah dimasukkan di positif, jadi untuk nilai minimal / negatif bisa sampai -2147483648
*/



/*
  variabel number dengan tipe data unsigned, maka tidak ada nilai negatif, sebaliknya nilai positifnya dikali 2 ukuran normal
 */