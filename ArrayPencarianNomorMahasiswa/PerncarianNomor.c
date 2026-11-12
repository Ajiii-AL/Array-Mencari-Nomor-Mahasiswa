#include <stdio.h>

int main(){

    int nomor[5+1];
    int i;
    int Cari = 0;
    int ditemukan = 0;

    printf("=== Masukkan nomor Mahasiswa === \n \n");
    for(i = 1; i < 6; i++ ){
        printf("Masukkan Nomor Mahasiswa %d :", i);
        scanf("%d", &nomor[i]);
    }

    printf("=== Nomor Mahasiswa ===\n \n");
    for(i = 1; i < 6; i++){
        printf("Nomor Mahasiswa %d : %d \n", i, nomor[i]);
    }
    
    printf("Cari Nomor Mahasiswa :");
    scanf("%d", &Cari);

    for(i = 1; i < 6; i++){
        if(nomor[i] == Cari){
            ditemukan = 1;
            break;
        }

    }
    printf("Nomor %d ", Cari);
    if(ditemukan == 1){
        printf("ditemukan %d : %d \n", i, nomor[i]);
    }else if(ditemukan == 0){
        printf("tidak ditemukan \n");
    }


    return 0;
}