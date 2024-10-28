#include<stdio.h>

int main(){
char operator;    
int x,y,hasil;

printf("masukan angka pertama: ");
scanf("%d",&x);
printf("pilih operator(+,/,*,-): ");
scanf(" %c",&operator);
printf("masukan angka kedua: ");
scanf("%d",&y);

switch (operator)
{
case '+':
    hasil = x + y; 
    printf("hasil dari %d + %d = %d\n",x,y,hasil);
    break;
case '-':
    hasil = x - y; 
    printf("hasil dari %d - %d = %d\n",x,y,hasil);
    break;

case '*':
    hasil = x * y; 
    printf("hasil dari %d * %d = %d\n",x,y,hasil);
    break;
    case '/':
if(x/y != 0){
  hasil = x/y;
    printf("hasil dari %d/%d=%d",x,y,hasil);
}
else{
    printf("kamu ngapain");
}
break;
default:
 printf("kesalahan : operator tidak valid");
}

return 0;
}