#include <iostream>
using namespace std;

int main () {
    //GOTO LABEL
        a:
            cout << "Hello World" << endl;
            goto d;
        b:
            cout << "Universitas Sumatera Utara" << endl;
            return 0;
        c:
            cout << "Fasilkom TI" << endl;
            goto b;
        d:
            cout << "Ilmu Komputer" << endl;
            goto c;     

    //BILANGAN GENAP DENGAN GOTO
        int i = 1;
        genap:
            if (i % 2 == 0) {
                cout << i << " ";
            }
            i++;
        if (i <= 10) {
            goto genap;
        }
    
    //WHILE = (CEK KONDISI DULU BARU DIJALANKAN)
       int i = 1;
            while (i <=10) {
                if (i % 2 == 0) {
                    cout << i << " ";
                }
                i++;
            }

    //DO WHILE = (DIJALANKAN DULU BARU CEK KONDISI)
        int i = 1;
        do {
            cout << i << endl;
        } while (i <= 10);

    //FOR
        for (int i = 1; i <= 10; i+=2) {
            cout << "Hello World" << endl;
        }

    //POLA BINTANG DENGAN FOR
        BINTANG BENTUK PERSEGI
        for (int i = 1; i<= 5; i++) {
            for (int j = 1; j <=5; j++) {
            cout << "* ";
            }
        cout << endl;
        }   

        //BINTANG BENTUK SEGITIGA SIKU-SIKU (CARA 1)
        for (int i = 1; i<= 5; i++) {
            for (int j = 1; j <=i; j++) {
            cout << "* ";
            }
        cout << endl;
        }
}