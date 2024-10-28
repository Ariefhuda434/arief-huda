/* Nama file: prima.c
2 Menentukan apakah bilangan prima atau

bukan */
 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

 int main()
 {
   
 int i, habis = 0,yes,no;
 long x;
  start:
 

 printf("Beri sebuah bilangan bulat,\n");
 printf("saya akan beritahu bilangan itu ");
 printf("prima atau bukan.\n");
 scanf("%ld", &x);
if(x <= 1)
 {
 printf("Prima terkecil adalah 2.\n");
 exit(0);
 }
 for(i=2; i < x; i++)
 {
 if((x % i) == 0)
 {
 printf("habis dibagi %d, karena itu",i);
 habis = 1;
 break;
 }
 }
if(!habis)
 printf("bilangan prima.\n");
 else
 printf(" %ld bukan prima.\n", x);


printf("\n\n");
goto start;
 

return 0;
}