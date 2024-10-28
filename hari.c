#include<stdio.h>

int main(){
    int hari,x;
    char *namaHari;

    hari = x;

    printf("masukan hari ke berapa: ");
scanf("%d",&hari);
    switch(hari){
        case 1:
        namaHari = "senin";
        break;
        case 2:
        namaHari = "selasa";
        break;
        case 3:
        namaHari = "rabu";
        break;
        case 4:
        namaHari = "kamis";
        break;
        case 5:
        namaHari = "jumat";
        break;
        case 6:
        namaHari = "sabtu";
        break;
        case 7:
        namaHari = "minggu";
        break;
    }

    printf("ini hari %s sayangku\n",namaHari);
    return 0;
}