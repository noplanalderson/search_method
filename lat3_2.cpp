#include<stdio.h>
#include<string.h>

using namespace std;
/**
 * main
 *
 * @author Muhammad Ridwan Na'im
 * @NIM 211011450453
 * @SKS/Semester 19
 * @Prodi Teknik Informatika
 * @return void
*/
int main()
{
	long int kode, jumlah, sks, semester;
	char nama[100];
	printf("Kode Masukkan: [1-2]:");scanf("%ld", &kode);
	printf("Jumlah SKS per semester [20-25]:");scanf("%ld", &sks);

	if(kode == 1)
	{
		strcpy(nama, "Teknik Informatika");
		jumlah = 30000*sks;
		semester = jumlah * 2;
	}
	else if(kode == 2)
	{
		strcpy(nama, "Akuntansi");
		jumlah = 15000*sks;
		semester = jumlah * 2;
	}
	else
	{
		strcpy(nama, "Manajemen");
		jumlah = 15000*sks;
		semester = jumlah * 2;
	}

	printf("*=====================================*\n");
	printf("Nama Kursus : %s\n", nama);
	printf("Pembayaran dalam 1 semester: %ld\n", jumlah);
	printf("Pembayaran dalam 1 tahun: %ld\n", semester);
	return 0;
}