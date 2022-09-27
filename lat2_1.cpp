#include<stdio.h>

int main()
{
  float panjang, lebar;
  float panjang2, lebar2;
  int luas, keliling, luas2, keliling2;

  printf("Masukkan panjang Bangun:");scanf("%f", &panjang);
  printf("Masukkan lebar Bangun:");scanf("%f", &lebar);
  luas=panjang*lebar;
  printf("Jadi luasnya Bangun adalah : %d\n", luas);

  // printf("Jadi kelilingnya Bangun adalah : %f\n", keliling);
  // printf("Jadi luasnya Bangun 2 adalah : %f\n", luas2);
  printf("Masukkan panjang Bangun 2:");scanf("%f", &panjang2);
  printf("Masukkan lebar Bangun 2:");scanf("%f", &lebar2);
  keliling2 =2*(panjang2+lebar2);
  printf("Jadi kelilingnya Bangun 2 adalah : %d\n", keliling2);
}