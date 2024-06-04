#include <stdio.h>

int main (){
    int nim;
    char kom;
    char nama [15];
    float ip;

    printf("Hello World\n"); //\n untuk enter

    printf("Masukkan Nama: ");
    // scanf("%s", nama);
    gets(nama); //gets = get string

    printf("Masukkan NIM: ");
    scanf("%d", &nim);

    printf("Masukkan KOM: ");
    scanf(" %c", &kom); //tambahkan spasi sebelum %c agar di enter

    printf("Masukkan IP: ");
    scanf("%f", &ip);

    // printf("Nama : %s\n", nama);
    printf("Nama : ");
    puts(nama); //pasangan gets adalah puts
    printf("NIM : %d\n", nim);
    printf("KOM : %c\n", kom);
    printf("IP : %.2f\n", ip);

    printf("Press any button to continue...");
    getch();
}