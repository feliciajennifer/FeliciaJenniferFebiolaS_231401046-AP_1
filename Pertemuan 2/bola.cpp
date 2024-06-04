#include <iostream>
using namespace std;

int main ()
{
    float luasp, volume, r;
    const float phi = 3.14; //konstanta = nilai tetap

    cout << "Masukkan jari-jari bola : ";
    cin >> r;

    luasp = 4 * phi * r * r;
    volume = (4.0/3) * phi * r * r * r;

    cout << "luas permukaan = "<< luasp << endl;
    cout << "volume = "<< volume << endl;
}