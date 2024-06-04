#include <iostream>
#include <vector>
using namespace std;

class Mahasiswa {
    //ACCESS MODIFIER
    private: //private agar tidak dapat diganti di tengah jalan
        string nama, nim;
        float nilai;

    public:
        //CONSTRUCTOR -> Fungsi yang langsung dipanggil ketika class diinstansiasi
            Mahasiswa(string nama, string nim, float nilai) { //setiap objek HARUS memiliki nama, nim, dan nilai dan WAJIB diisi
                this->nama = nama;
                this->nim = nim;
                this->nilai = nilai;
            }

    //GETTER FUNCTION -> untuk mengembalikan data sebuah variabel yang memiliki akses private (hanya isi satu aja)
    string getName () {
        return this->nama;
    }

    //PEMANGGILAN
        void display () {
            cout << "Nama   : " << this->nama << endl;
            cout << "Nim    : " << this->nim << endl;
            cout << "Nilai  : " << this->nilai << endl;
        }

};

int main () {
    system("cls"); // membersihkan layar

    Mahasiswa siswa1 ("Andi", "213140111", 45.6);

    cout << siswa1.nama << endl;

    siswa1.display ();

    // Error karena nama masuk kedalam kategori private jadi tidak bisa pakai siswa1.nama
    // cout << siswa1.nama << endl;
    // siswa1.nama = "Budi";
    // cout << siswa1.nama << endl;
 
    cout << siswa1.getName() << endl; //untuk getter function

    vector<Mahasiswa> mahasiswa;
    int n;
    string nama, nim;
    float nilai;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get(); //baris baru
        cout << "Masukkan nama : ";
        getline(cin, mhs.nama); //biar ada spasi

        cout << "Masukkan NIM : ";
        cin >> nim;

        cout << "Masukkan nilai : ";
        cin >> nilai;

        mahasiswa.push_back(mhs);
    }

    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        mahasiswa[i].display(); //Untuk mendapatkan mahasiswa K berapa
    }

    return 0;
    }
    

    /* PERBEDAAN CLASS DAN STRUCTURE
1. KEAMANAN
2. CLASS WAJIB DIISI */