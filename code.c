#include <stdio.h>
#include <conio.h>
#include <string.h>


void main(){

    char ulangi = 'y';
    int counter = 0;
    char kode_belanja[20] = {'A', 'B', 'C', 'D', 'E'};

    char barang1[] = "Baju";
    char barang2[20];
    strcpy(barang2, barang1);

    int total_belanja;
    printf("\t ===Program Pembayaran=== \n");
    printf("masukkan uangmu:");
    scanf("%d",&total_belanja);
    if(total_belanja<20000){
        printf("anda mendapatkan bonus\n ");
    }else{
        printf("anda tidak mendapatkan bonus\n");
    }


    do {
        printf("Apakah kamu mau Belanja kembali?\n");
        printf("Jawab (y/t): ");
        scanf(" %c", &ulangi);

        // increment counter
        counter++;
    } while(ulangi == 'y');

    printf("Anda Membeli Barang: %s\n", barang2);
    printf("Kode Belanja: %c\n", kode_belanja[2]);
    printf("\n\n----------\n");
    printf("Perulangan Selesai!\n");
    printf("Kamu mengulang sebanyak %i kali.\n", counter);
}
