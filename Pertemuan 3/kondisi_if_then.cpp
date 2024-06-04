#include <iostream>
using namespace std;

int main ()
{
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

//IF STATEMENT
    if (nilai <= 65) then {
        cout << "Anda tidak lulus" << endl;
    }

//IF-ELSE STATEMENT
     if (nilai <= 65) {
        cout << "Anda tidak lulus" << endl;
     }
        else {
            cout << "Anda Lulus" << endl;
        }

//IF-ELSE-IF STATEMENT
    if (nilai == 100){
        cout << "Anda hebat" << endl;
    }
       if (nilai <= 65) {
        cout << "Anda tidak lulus" << endl;
        }
            else {
            cout << "Anda Lulus" << endl;
            }

//NESTED IF STATEMENT
    if (nilai <= 65) {
        cout << "Anda tidak lulus" << endl;
    }
        else {
            if (nilai == 100) {
                cout << "Anda lulus dan anda hebat" << endl;
            }
                else {
                    cout << "Anda lulus" << endl;
                }
            }

//SWITCH CASE
    switch (nilai) {
        case 1 : cout << "Senin" << endl; break; //[BREAK HARUS DIPAKAI, KALAU TIDAK ADA, MAKA NILAI DIBAWAHNYA AKAN DIANGGAP BAGIAN NILAI 1]
        case 2 : cout << "Selasa" << endl; break;
        case 3 : cout << "Rabu" << endl; break;
        case 4 : cout << "Kamis" << endl; break;
        case 5 : cout << "Jumat" << endl; break;
        case 6 : cout << "Sabtu" << endl; break;
        case 7 : cout << "Minggu" << endl; break;
        default : cout << "Inputan tidak valid" << endl; //[BREAK DISINI OPSIONAL]
    }

//SWITCH CASE FOR RANGE
    switch (nilai) {
        case 85 ... 100 : cout << "A" << endl; break; // tanda (...) = sampai
        case 80 ... 84 : cout << "B+" << endl; break;
        case 75 ... 79 : cout << "B" << endl; break;
        case 70 ... 74 : cout << "C+" << endl; break;
        case 65 ... 69 : cout << "C" << endl; break;
        case 60 ... 64 : cout << "D" << endl; break;
        default : cout << "E" << endl; break;  
    }

//TERNARY OPERATOR
    //[CARA YANG LAMA]
    if (nilai % 2 == 0) {
        cout << "Genap" << endl;
    }
        else {
            cout << "Ganjil" << endl;
        } 

    //[CARA CEPAT DAN BARU]
    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    cout << nilai << " adalah bilangan " << checkNum << endl; // [RUMUS : (KONDISI ? "IF TRUE/IYA" : "IF FALSE"/TIDAK]
}