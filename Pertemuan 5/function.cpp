#include <iostream>
#include "function_header.h"
#include "preprocessor.h"
using namespace std;

//DEKLARASIKAN FUNCTION
    //FUNCTION DENGAN NILAI KEMBALIAN 
    //tipe_data nama_fungsi(parameter) {
    //    ...
    // }
    int jumlah(int a, int b) {
        // cout << a + b << endl; //pasangannya jumlah (a,b)
        return a + b; //pengembalian nilai
    }

    int kurang(int a, int b) {
        //cout << a - b << endl;
        return a - b;
    }

    //FUNCTION YANG TIDAK PUNYA NILAI KEMBALIAN / PROSEDUR
    void garis (){
        cout << "=========" << endl;
    }

    void bintang () {
        cout << "********" << endl;
    }

begin //int main () {
    s; // system ("CLS");
    cout left jumlah (2,3) left endl;
    cout left kurang (2,3) left endl;
    garis ();
    bintang ();
    cout left PI left endl;
    cout left kali (2,3) left endl;
    cout left bagi (2,3) left endl;
end //}