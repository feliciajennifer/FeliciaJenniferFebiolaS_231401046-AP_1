#include <iostream>
#include <array>
using namespace std;

int main() {

//ARRAY DECLARATION AND INITIALIZATION
    string nama [5];

    nama[0] = "Andi";
    nama[1] = "Budi";
    nama[2] = "Canra";
    nama[3] = "Daniel";
    nama[4] = "Elang";

    cout << nama[0] << endl;
    cout << nama[1] << endl;
    cout << nama[2] << endl;
    cout << nama[3] << endl;
    cout << nama[4] << endl; //CARA INI TIDAK EFEKTIF DAN EFISIEN

//CARA EFISIEN
    string nama [5] = {"Andi", "Budi", "Canra", "Daniel", "Elang"};

    cout << nama[0] << endl;
    cout << nama[1] << endl;
    cout << nama[2] << endl;
    cout << nama[3] << endl;
    cout << nama[4] << endl;

//PAKAI FOR
    string nama [5] = {"Andi", "Budi", "Canra", "Daniel", "Elang"};

    for (int i = 0; i < 5; i++) {
        cout << nama[i] << endl;
    }


//MULTIDEMENSIAL ARRAY (CONTOH : MATRIKS)
    int matrix[2][3] = {{1, 3, 5}, {2, 4, 6}}; //banyak baris [x], lalu kolom [y]
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

//STRING (ARRAY OF CHARACTERS)
    string nama = "Zustine";
    // cout << nama[0] << endl;
    // cout << nama[2] << endl; //outputnya per huruf

    for (int i = 0; i < nama.length(); i++) {
        cout << nama[i] << endl;
    }

//CONTOH PROGRAM 1
    int n;

    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    float nilai[n]; //float sebanyak n. Tidak dibuat di awal karena n akan merujuk pada int n. Nanti nilai arraynya kosong

    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai mahasiswa ke " << i + 1 << " : "; //tambah satu agar mulai dari satu bukan 0
        cin >> nilai[i];

    for (int i = 0; i < n; i++) {
        cout << "Nilai mahasiswa ke " << i + 1 << " : " << nilai[i] << endl;
    }
    }

//CONTOH PROGRAM 2
    string nama_karyawan[] = {"Andy", "Yusuf", "Budi", "Yanto", "Santika", "Dodi"}; //[] dikosongkan karena kita tidak tau jumlahnya. Program akan menghitung otomatis

    // sizeof() = fungsi untuk mengecek ukuran suatu objek
    // n * sizeof(string) = sizeof(nama_karyawan)
    // n = sizeof(nama_karyawan) / sizeof(string)
    for (int i = 0; i < sizeof(nama_karyawan) / sizeof(string); i++) {
        cout << nama_karyawan[i] << endl;
    }

//CONTOH PROGRAM 3
    int matriks1[2][2];
    int matriks2[2][2];
    int hasil[2][2];

    cout << "Matriks 1" << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " ";
            cin >> matriks1[i][j];
        }
    }

    cout << "Matriks 2" << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " ";
            cin >> matriks2[i][j];
        }
    }

    cout << "Hasil Penjumlahan" << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

//ARRAY LIBRARY
    array<float, 5> nilai = {87.2, 90, 100, 95.7, 78.5};

    cout << "Nilai : ";
    for (int i = 0; i < nilai.size(); i++) {
        cout << nilai[i] << " ";
    }

    for (float n : nilai) { //For each loop
        cout << n << " ";
    }

}
