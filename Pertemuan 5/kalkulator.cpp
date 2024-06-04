#include <iostream>
#include <math.h>
using namespace std;

//CARA LAIN : BOLEH DIDEKLARASIKAN FUNGSI DULU TANPA ADA ISI
void garis () {
        cout << "============================================" << endl;
} 

void bintang () {
        cout << "********************************************" << endl;
}

int jumlah(int a, int b) {
        return a + b; 
}

int kurang(int a, int b) {
        return a - b; 
}

int kali(int a, int b) {
        return a * b; 
}

float bagi (int a, int b) {
    return static_cast<float>(a) / static_cast<float>(b); // mengubah nilai a dan b menjadi tipe data float
}

int modulo(int a, int b) {
        return a % b; 
}

int pangkat(int a, int b) {
        return pow (a,b); 
}

void menu () {
    cout << "1. Jumlah" << endl;
    cout << "2. Kurang" << endl;
    cout << "3. Kali" << endl;
    cout << "4. Bagi" << endl;
    cout << "5. Modulo" << endl;
}

int main () {
    char operasi;
    int a,b;
    char lanjut;
    system ("CLS");
    garis ();
    cout << "Selamat Datang di Program Kalkulator" << endl;
    garis ();
    menu ();
    garis();
    do {
    cout << "Masukkan Operasi : ";
    cin >> operasi;
    cout <<"Masukkan Angka Pertama : ";
    cin >> a;
    cout <<"Masukkan Angka Kedua : ";
    cin >> b;
    bintang ();
    switch (operasi) {
        case '+':
        cout << "Hasil "  << a << " " << operasi << " " << b << " = " << jumlah (a,b);
        break;
        case '-':
        cout << "Hasil " << a << " " << operasi << " " << b << " = " << kurang (a,b);
        break;
        case '*':
        cout << "Hasil "  << a << " " << operasi << " " << b << " = " << kali (a,b);
        break;
        case '/':
        cout << "Hasil "  << a << " " << operasi << " " << b << " = " << bagi (a,b);
        break;
        case '%':
        cout << "Hasil "  << a << " " << operasi << " " << b << " = " << modulo (a,b);
        break;
        case '^':
        cout << "Hasil "  << a << " " << operasi << " " << b << " = " << pangkat (a,b);
        break;
    }
    cout << "\nApakah Anda ingin melanjutkan? [Y/N] : ";
    cin >> lanjut;
    }
    while (lanjut == 'Y');
}