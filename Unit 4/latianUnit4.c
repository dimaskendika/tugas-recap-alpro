#include <stdio.h>

int sisi;

    void keliling (int x){
        int hasil = 4 * x;
        printf("Kelilingnya adalah %d\n", hasil);
    }

    void luas (int x){
        int hasil = x * x;
        printf("Luasnya adalah %d\n", hasil); 
    }
    
    void volume (int x){
        int hasil = x * x * x;
        printf("Volumenya adalah %d\n", hasil);
    }

int main(){

    printf("Masukan panjang sisi: \n");
    scanf("%d", &sisi);

    printf("Hasilnya adalah : \n\n");

    keliling(sisi);
    luas(sisi);
    volume(sisi); 
    
    return 0;
}