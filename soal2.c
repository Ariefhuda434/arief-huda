#include <stdio.h>

int main(){
    int a,b;

    printf("aku mau cek bilangan tu ganjil atau genap: ");
    scanf("%d",&a);

    if (a % 2 == 0)
    {
        printf("itu bilangan genap");
    }
    else{
        printf("itu bilangan ganjil");
    }

    return 0;
    
}