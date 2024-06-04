#include <iostream>
#include <vector>
using namespace std;

//STRUCT DECLARATION (DISARANKAN)
    struct Mahasiswa { //huruf pertama kapital
        string nama, nim;
        float nilai;
    };

// //STRUCT DECLARATION 2
    typedef struct {
        string nama, nim;
        float nilai;
    } mhs;

int main () {
    system("cls");

// //STRUCT INITIALITATION
    Mahasiswa mhs; //dipanggil dulu

    cout << "Masukkan nama : ";
    cin >> mhs.nama;

    cout << "Masukkan nim : ";
    cin >> mhs.nim;

    cout >> "Masukkan nilai : ";
    cin >> mhs.nilai;

    cout >> "Nama anda " << mhs.nama << " dengan NIM " << mhs.nim << " dan nilai " << mhs.nilai << endl;

//UNTUK MAHASISWA YANG BANYAK 
    Mahasiswa mhs;
    vector<Mahasiswa> mahasiswa; //untuk menampung data banyak mahasiswa
    int n;

    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get();
        cout << "Masukkan nama : ";
        getline(cin, mhs.nama);

        cout << "Masukkan NIM : ";
        cin >> mhs.nim;

        cout << "Masukkan nilai : ";
        cin >> mhs.nilai;

        mahasiswa.push_back(mhs); //masukkan inputan ke baris belakang
        //vector masih kosong, jika ingin mengisi data maka setiap datanya itu kita push back
    }

    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl; //data "mahasiswa" bisa menampung banyak mhs
        cout << "NIM : " << mahasiswa[i].nim << endl;
        cout << "Nilai : " << mahasiswa[i].nilai << endl;

    }
        
}

/* PERBEDAAN CLASS DAN STRUCTURE
1. KEAMANAN
2. CLASS WAJIB DIISI */