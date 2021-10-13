/*

PSEUDOCODE!

Rumus?
sisi miring = sqrt(akar dari) (alas x alas) + (tinggi x tinggi)
keliling = alas + tinggi + sisi miring

Input?
Sisi Datar = Alas
Sisi Tegak = Tinggi

Output?
Menghitung Sisi Miring
Menghitung Keliling

Library Yang Dibutuhkan?
iostream --> Pasti dipakai
conio --> dipakai jika ingin merubah warna text
math.h --> dipakai jika ingin menggunakan logic matematika

misal,
sqrt = akar dari
operator = + - / % dsb

Deklarasi Varibale?
alas berupa angka
tinggi berupa angka
sisi miring dan keliling berupa angka

*/

// Memasukan Semua Library Yang Di butuhkan!
#include <iostream> // --> ini memanggil C++!
#include <conio.h>
#include <math.h>

using namespace std;
// --> using = menggunakan, namespace --> class, pemodelan, std/Standard

    /* Global Varibale */
    int alas, tinggi;
    double sisiMiring, keliling;
    // titik koma (;) --> semicolon
    // konsep flexibility!

int main() {
    // ini adalah scope!
    
    /* User Input */
    cout << "Masukan Nilai Alas = "; cin >> alas;
    // dari awal nilai yang berisi 0 atau null akan menjadi sesuai user input!
    cout << "Masukan Nilai Tinggi = "; cin >> tinggi; cout << endl;

    /* Logic Matematika/Business Logic */
    // sisi miring = sqrt(akar dari) (alas x alas) + (tinggi x tinggi)
    sisiMiring = sqrt(alas * alas) + (tinggi * tinggi);

    //keliling = alas + tinggi + sisi miring
    keliling = alas + tinggi + sisiMiring;

    /* Output */
    cout << "sisiMiring = sqrt(alas * alas) + (tinggi * tinggi)" << endl;
    cout << "Nilai Sisi Miring = " << sisiMiring;
    cout << "keliling = alas + tinggi + sisiMiring" << endl;
    cout << "Nilai Keliling = " << keliling;

    // harus menggunakan return, berupa int juga!
    return 0; // return 1 jika ada kesalahan
}


