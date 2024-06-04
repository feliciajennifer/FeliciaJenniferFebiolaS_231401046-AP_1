#include <iostream>
using namespace std;

int main ()


{
    int a, b;

    system("CLS"); // untuk membersihkan layar

    //assignment operator
    a = 3;
    b = 5;

//OPERATOR ARITMATIKA 
    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    float bagi = (float) a / (float) b; //harus ditambahi float pada a dan b agar outputnya berkoma atau tidak nol
    int modulo = a % b;

    cout << "Hasil penjumlahan = " << tambah << endl;
    cout << "Hasil pengurangan = " << kurang << endl;
    cout << "Hasil perkalian = " << kali << endl;
    cout << "Hasil pembagian = " << bagi << endl;
    cout << "Hasil sisa bagi = " << modulo << endl;
    
//OPERATOR RASIONAL
    cout << (a == b) << endl;
    cout << (a > b) << endl;
    cout << (a >= b) << endl;
    cout << (a < b) << endl;
    cout << (a <= b) << endl;
    cout << (a != b) << endl;

//OPERATOR LOGIKA
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;

    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;

    cout << (!true) << endl;
    cout << (!false) << endl;

//OPERATOR BITWISE
    cout << (5 & 7) << endl;
    cout << (5 | 7) << endl;
    cout << (5 ^ 7) << endl;
    cout << (~7) << endl;
    cout << (7 << 2) << endl;
    cout << (7 >> 2) << endl;
    
//SHORTHAND = perisngkat penulisanpre
    a += 7; // sama dengan a = a + 7
    cout << a << endl;
    a -= 7;
    cout << a << endl;

//Post Increment
    cout << a++ << endl; // a digunakan dulu, baru ditambahkan
    cout << a << endl;

    cout << b++ << endl;
    cout << b << endl;


//Pre Decrement
    cout << a << endl;
    cout << --a << endl; // a dikurangi dulu baru digunakan

    cout << b << endl;
    cout << -b << endl;


//Post Decrement
    cout << a-- << endl;
    cout << a << endl;

    cout << b-- << endl;
    cout << b << endl;
}