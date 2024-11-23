preprocessing adalah mekanisme untuk menggabungkan semua yang dibutuhkan oleh file yang akan dicompile

misalnya ada file `hello_world.cpp` file itu didalamnya mengimport standard library _iostream_

```cpp
#include <iostream>
```

maka secara garis besar compiler akan mencopy library _iostream_ itu kedalam file yang akan dicompile,
jika ingin tau apakah std library _iostream_ itu dicopy ke file yang akan dicompile kamu bisa menggunakan command berikut ini

```bash
# jika menggunakan compiler clang
[fani@OpenSUSE] $ clang++ -E hello_world.cpp > hello_world.p

# jika menggunakan compiler gcc
[fani@OpenSUSE] $ g++ -E hello_world.cpp > hello_world.p
```

kedua command itu akan menyatukan std library yang diimport kedalam **hello_world.cpp** dan programnya itu sendiri kedalam file **hello_world.p**

setelah preprocessing selesai, tahap selanjutnya adalah mencompile, jika ingin mencompile menjadi object file, yang berisi _machine code_ command-nya adalah

```bash
# jika menggunakan compiler clang
[fani@OpenSUSE] $ clang++ -c hello_world.cpp

# jika menggunakan compiler gcc
[fani@OpenSUSE] $ g++ -c hello_world.cpp
```

kedua command itu akan menghasilkan object file

lalu langkah selanjutnya adalah menjadikan object file menjadi executable dengan proses linking,
linking adalah proses menyatukan semua object file menjadi 1 file executable, command-nya adalah

```bash
# jika menggunakan compiler clang
[fani@OpenSUSE] $ clang++ obj1.o obj2.o

# jika menggunakan compiler gcc
[fani@OpenSUSE] $ g++ obj1.o obj2.o
```

command itu akan menghasilkan 1 file executable
