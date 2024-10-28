#include<stdio.h>

int main(){
 printf("selamat datang teman\n");
printf("masukan nama anda: ");
   
    char inisial;


    scanf("%c",&inisial);
 printf("masukan umur anda: ");
int umur;
   
    scanf("%d",&umur);

   printf("inisial nama kamu adalah %c dan umur kamu %d",inisial,umur);

   return 0;
}