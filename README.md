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