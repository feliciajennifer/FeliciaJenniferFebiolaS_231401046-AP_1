#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("cls");

//VECTOR DECLARATION AND INITIALIZATION
    vector<string> nama_karyawan = {"Andi", "Budi", "Santi", "Doni", "Yanto"};

    //Acessing elements of vector
        for (int i = 0; i < nama_karyawan.size(); i++) {
            cout << nama_karyawan[i] << endl;
        }

        //CARA CEPAT DARI FOR LOOPING
        for (string karyawan : nama_karyawan) { //For Each Loop
            cout << karyawan << endl;
        }

    //menambahkan data baru ke vector
        nama_karyawan.push_back("Wawan");

    //menghapus data vector paling akhir
        nama_karyawan.pop back();

    //menghapus data di tengah (contoh: doni)
        nama_karyawan.erase(nama_karyawan.begin() + 3); //begin () untuk mendapatkan data paling awal, erase() untuk menghapus

        for (int i = 0; i < nama_karyawan.size(); i++) {
            cout << nama_karyawan[i] << endl;
        }


}