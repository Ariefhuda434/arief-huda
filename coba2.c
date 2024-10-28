#include <stdio.h>

int main(){
    int x,m,i;
    char pilihan;
    start:
    printf("beruikan angka  prima maka saya akan ksih tau dia prima atau bukan: ");
    scanf("%d",&x);
    m=0;
    for ( i = 1; i < x; i++)
    {
        if (x % i == 0)m++;
    }
    if(m == 2)
    printf("angka %d tersebut merupakan bilangan prima",x);

    else{
        printf("angka %d bukan bilangan prima",x);
    }
getchar();\
    printf("\napakah pingin lanjut y atau t: ");
    scanf(" %c",&pilihan);
  
    if (pilihan == 'y' || pilihan == 'Y')
    {
goto start;
    }
else{
    return 0;
}    
}

    

    