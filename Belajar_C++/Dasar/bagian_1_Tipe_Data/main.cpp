#include <iostream>

int main(){
    // macam macam tipe data c++

    // tipe integer untuk bilangan bulat bukan pecahan atau desimal 
    // short digunakan untuk bilangan bulat kecil untuk menghemat memori (2 byte)
    // int tipe umum yang biasa digunakan untuk operasi normal sehari hari (4 byte)
    // long bilangan bulat lebih besar cocok untuk skala besar (4 byte)
    // long long bilangan bulat ekstra besar untuk kebutuhan hingga kuadriliun (8 byte)
    // unsigned digunakan untuk menyimpan bilangan bulat tipe integer non-negatif (ukuran tergantung tipe)

    // tipe floating point untuk menyimpan bilangan bulat pecahan ataupun desimal 
    // float untuk angka pecahan presisi tungggal dan rendah (grafik atau game) (4 byte)
    // double untuk pecahan presisi ganda berguna untuk perhitungan ilmiah atau keuangan yang membutuhkan presisi tinggi (8 byte)
    // long double untuk angka pecahan yang membutuhkan presisi yang sangat tinggi seperti penelitian ilmiah dan simulasi numerik (10 - 16 byte)

    // tipe char menyimpan karakter atau data berbasis teks
    // char menyimpan karakter ASCII (0-255) cocok berbasis bahasa inggris atau data biner kecil (1 byte)
    // wchar karakter unicode wide untuk teks multi bahasa (2 byte)
    // char8_t unicode UTF-8 cocok untuk encoding teks modern (1 byte)
    //



    // tipe integer
    char tipeChar;  // tipe char memiliki ukuran memori 1 byte nilai minimum -127 dan maksimum +127
    unsigned char tipeCharU; // memiliki ukuran memori 1 byte nilai minimum 0 dan maksimum 255

    // tipe short memiliki ukuran memori 2 byte
    short tipeShort; // nilai bilangan bulat minimum -32.768 dan maksimum +32.768
    unsigned short tipeShort; // memiliki nilai bilangan bulat minimum 0 dan maksimum + 65.535

    // tipe int
    int tipeInt; // ukuran memori 4 byte dan nilai bilangan bulat antara -2 miliar dan +2 miliar
    unsigned int tipeIntU; // ukuran memori nilai 4 byte nilai bilangan bulat min 0 dan maks 2 miliar

    // tipe long memiliki ukuran 8 byte
    long tipeLong; // nilai bilangan bulat minimal -9 kuintiliun dan maksimum +9 kuintiliun
    unsigned long tipeLongU; // nilai  bilangan bulat minimal 0 maksimum 18 kuintiliun

    // tipe floating point
    float tipeF; // float memiliki ukuran 4 byte dan nilai minimum -3.4e38 dan maksimum +3.4e38
    double tipeD; // double memiliki ukuran 8 byte dan nilai minimum -1.7e308 dan maksimum +1.7e308
    long double tipeDoubleL; // long double memiliki ukuran 16 byte dan nilai minimum -1.1e4932 dan maksimum +1.1e4932

    // tipe special
    wchar_t tipeWchar; // ukuran memori 2 byte nilai minimum 0 dan maksimum 65,535
    char8_t tipeChar8; // ukuran memori 1 byte dan nilai minimum 0 dan maksimum 255
    char16_t tipeChar16; // ukuran memori 2 byte nilai minimum 0 dan maksimum 65,535
    char32_t tipeChar32; // ukuran memori 4 byte nilai minimum 0 dan maksimum 4 miliar

    // tipe logika
    bool benar = true; // ukuran memori 1 byte bernilai true dan false
    bool salah = false; // ukuran memori 1 byte bernilai true dan false

    return 0;
}