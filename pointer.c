/* Nama file: uts_2024_1.c
   Tentukan huruf besar atau huruf kecil
   dan kode ASCII  */

#include <stdio.h>
#include<stdlib.h>

int main()
{
	char *chptr;
    printf(" lokasi memory chptr = %p\n",&chptr);

    
    chptr=(char *)malloc(sizeof(char));
    printf(" lokasi memory yang ditunjuk oleh chptr = %p\n",*chptr);
	/* Minta sebuah karakter */
	
    printf("Berikan sebuah karakter: ");
	scanf("%c", &chptr);
	
	if (*chptr >= 65 && *chptr <=90)
		printf("Huruf besar, ");
	else if(*chptr >= 97 && *chptr <=122)
		printf("Huruf kecil, ");
	/* Tampilkan Kode ASCII */
	printf("kode ASCII %c = %d.\n", *chptr, *chptr);
	
    free(chptr);
	return 0;
}