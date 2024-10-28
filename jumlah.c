#include <stdio.h>

int main()
{
char ch;

int cth=0,cta=0,ctl=0,ctsp=0, ct=0;

printf("berikan sebuah kalimat:\n");

while((ch = getchar()) != '\n')

switch (ch){
{
case 'a': 
case 'A': 
case 'b': 
case 'B': 
case 'c': 
case 'C': 
case 'd': 
case 'D': 
case 'e': 
case 'E': 
case 'f': 
case 'F': 
case 'g': 
case 'G': 
case 'h': 
case 'H': 
case 'i': 
case 'I': 
case 'j': 
case 'J': 
case 'k': 
case 'K': 
case 'l': 
case 'L': 
case 'm': 
case 'M': 
case 'n': 
case 'N': 
case 'o': 
case 'O': 
case 'p': 
case 'P': 
case 'q': 
case 'Q': 
case 'r': 
case 'R': 
case 's': 
case 'S': 
case 't': 
case 'T': 
case 'u': 
case 'U': 
case 'v': 
case 'V': 
case 'w': 
case 'W': 
case 'x': 
case 'X': 
case 'y': 
case 'Y': 
case 'z': 
case 'Z': 
cth++;
break;
case '0':
case '1':
case '2':
case '3':
case '4':
case '5':
case '6':
case '7':
case '8':
case '9':
cta++;
break;
case ' ':
ctsp++;
break;
default:
ctl++;
break;
}
}
printf("jumlah huruf = %d\n",cth);
printf("jumlah angka = %d\n",cta);
printf("jumlah spasi = %d\n",ctsp);
printf("jumlah lainnya = %d\n",ctl);

return 0;

}