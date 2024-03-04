#include <stdio.h>

int transaksi;
int nominal;
int jumlah = 0;

int main(){

    printf("Masukan jumlah transaksi:\n");
    scanf("%d", &transaksi);
    if(transaksi<=0){
        printf("Tidak ada transaksi hari ini.");
    } else {
        printf("Masukan nominalnya: \n");
        for(int i=0;i<transaksi;i++){
            scanf("%d", &nominal);
            jumlah += nominal;
            }
            printf("Total pengeluaran Anda hari ini adalah %d", jumlah);    
    }
    return 0;
}
