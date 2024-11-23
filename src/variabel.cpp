#include <iostream>
#include <typeinfo>

int main() {
  int a = 100;
  /*
    cara mendefinisikan variabel adalah dengan cara / keyword
    <typedata> <namavariabel> = <value>
  */
  std::cout << "Tipe dari a adalah: " << typeid(a).name() << std::endl;
  /*
    statement typeid(a).name() awalanny tidak menggunakan std:: dikarenakan typeid bukanlah bagian dari standard library sama seperti sizeof
    typeid ini hanyalah interface buat memanggil informasi type
    fungsi tambahan seperti .name() disediakan oleh std::type_info, dimana itu didefinisikan didalam header file <typeinfo>
   */
  std::cout << "Ukuran dari a adalah: " << sizeof(a) << " bytes\n";
  return 0;
}
