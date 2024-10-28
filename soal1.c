/*bikin programmenerima input dua bilangan dari memasukan dua angka*/

#include<stdio.h>

int main(){
    int a,b,jumlah;

    printf("masukan angka pertama; ");
    scanf("%d",&a);
    
    printf("masukan angka kedua; ");
    scanf("%d",&b);

    jumlah = a + b;

    printf("hasilnya adalah %d",jumlah);

    return 0; 

}
