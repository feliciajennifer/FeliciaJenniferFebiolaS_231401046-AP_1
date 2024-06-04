//HEADER UNTUK MENYIMPAN NILAI
int kali (int a, int b) {
    return a * b;
}

float bagi (int a, int b) {
    // return (float) a / (float) b; //CARA SATU --> Type casting
    return static_cast<float>(a) / static_cast<float>(b); //type casting
}