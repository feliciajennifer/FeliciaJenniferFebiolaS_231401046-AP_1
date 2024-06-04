#include <iostream>

using namespace std;

void penjumlahan(int a, int b) {
    cout << a + b << endl;
}

void penjumlahanPointer(int* a, int* b) {
    cout << *a += *b << endl;
    cout << *a << endl;
}

void doubleValue(int* a) { //void ga punya nilai kembalian      //dibuat int* agar dpt diakses semua program
    *a *= 2; 
}

int kali2(int a) {
    return a*2;
}

int main () {
    system("CLS");

// //POINTER DECLARATION

    //Normal Variabel --> variabel(data), &variabel(alamat memori)
    int number = 35;
    // Pointer variabel --> variabel(alamat memori variabel yang ditunjuk), &variabel(alamat memori), *variabel(data variabel)
    int* pointer_number = &number; //* untuk menunjukkan pointer

    cout << "Isi variabel number = " << number << endl;
    cout << "Alamat memori variabel number = " << &number << endl;
    cout << "Isi variabel number = " << pointer_number << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    cout << endl;

// //POINTER OPERATION
    *pointer_number = 25;
    cout << "Isi variabel number = " << number << endl;
    cout << "Alamat memori variabel number = " << &number << endl;
    cout << "Isi variabel number = " << pointer_number << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = " << &pointer_number;
    //yang kita ganti disini hanya datanya, alamat memorinya tidak terpengaruh
    cout << endl;

// //POINTER IN ARRAY
    int num[] = {1, 2, 3, 4, 5};
    cout << "Isi variabel num = " << num[0] << endl;
    cout << "Alamat memori variabel num = " << &num[0] << endl;
    // cout << "Alamat memori variabel num = " << num << endl;  //same with above
    cout << "Isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    cout << endl;

    *pointer_num += 5;
    cout << "Isi variabel num = " << num[0] << endl;
    cout << "Alamat memori variabel num = " << &num[0] << endl;
    cout << "Isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    cout << endl;

// //POINTER IN PARAMETER
    int num1 = 5;
    int num2 = 7;
    penjumlahan(num1, num2);
    cout << num1 << endl;
    cout << num2 << endl;

    penjumlahanPointer(&num1, &num2);
    cout << num1 << endl;
    cout << num2 << endl;

// //POINTER IN POINTER
    int score = 4;
    int* pointer_score = &score;
    int** ptr_pointer_score = &pointer_score; //menunjuk alamat memori pointer lainnya
    cout << "Isi variabel score " << score << " dan alamat memorinya " << &score << endl;
    cout << "Isi variabel pointer_score " << pointer_score << " isi variabel yang ditunjuk oleh pointer_score " << *pointer_score << " dan alamat memori pointer_score" << &pointer_score << endl;
    cout << "Isi variabel ptr_pointer_score " << pointer_score << " isi variabel yang ditunjuk oleh ptr_pointer_score " << **pointer_score << " dan alamat memori ptr_pointer_score " << &ptr_pointer_score << endl;
    cout << endl;

// //DYNAMIC POINTER
    int* ptr = new int; //new supaya ada space di alamatnya     // memory allocation
    *ptr = 30;
    cout << "Isi variabel ptr " << *ptr << " alamat variabel ptr " << &ptr << endl;
    delete ptr; //untuk memory deallocation --> membuang isinya
    cout << "Isi variabel ptr " << *ptr << " alamat variabel ptr " << &ptr << endl;
    cout << endl;

//CONTOH 1
    int n;
    cout << "Masukkan sebuah angka : ";
    cin >> n;

    doubleValue(&n);
    cout << "Nilai angka setelah dikali 2 = " << n << endl;

}
