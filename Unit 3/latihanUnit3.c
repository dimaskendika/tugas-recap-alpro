#include <stdio.h>

int jumlah = 0;
int elemen;

int main(){

    printf("Masukan jumlah elemen array:\n");
    scanf("%d", &elemen);

    int array[elemen]; //mengisi elemen array dengan jumlah yg sudah diinput sebelumnya

    printf("Masukan value array:\n");
    for (int i=0;i<elemen;i++){
        scanf("%d", &array[i]);
    }
     for (int i=0;i<elemen;i++){ //menghitung total value array
        jumlah += array[i];     
    }
    printf("Totalnya adalah: %d\n", jumlah);      

    return 0;
}