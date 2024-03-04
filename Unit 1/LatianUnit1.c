#include <stdio.h>

int main(){

int j1,t1; // untuk rumus kecepatan
int k1,t2; // untuk rumus jarak
int j2,k2; // untuk rumus waktu

printf("Masukan jarak dan waktu untuk menghitung kecepatan!\n");
scanf("%d", &j1);
scanf("%d", &t1);

printf("Masukan kecepatan dan waktu untuk menghitung jarak!\n");
scanf("%d", &k1);
scanf("%d", &t2);

printf("Masukan jarak dan kecepatan untuk menghitung waktu!\n");
scanf("%d", &j2);
scanf("%d", &k2);

float V = (float) j1 / t1; // rumus kecepatan
float S = (float) k1 * t2; // rumus jarak
float T = (float) j2 / k2; // rumus waktu

printf("Hasil perhitungan kecepatan adalah : \n");
printf("%.2f\n", V);
printf("Hasil perhitungan jarak adalah : \n");
printf("%.2f\n", S);
printf("Hasil perhitungan waktu adalah : \n");
printf("%.2f\n", T);

return 0;
}