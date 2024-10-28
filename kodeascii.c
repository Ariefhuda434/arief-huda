#include <stdio.h>

int main() {
    char karakter;

    // Minta pengguna memasukkan sebuah karakter
    printf("Masukkan sebuah karakter: ");
    scanf("%c", &karakter);

    // Tampilkan karakter dan kode ASCII-nya
    printf("Karakter: '%c', Kode ASCII: %d\n", karakter, (int)karakter);

    return 0;
}