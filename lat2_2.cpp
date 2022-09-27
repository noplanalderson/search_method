#include <stdio.h>
int main()
{
	float panjang, lebar, tinggi;
	float panjang2, lebar2, tinggi2;
	int luas, volume;

	printf ("Masukkan panjang : "); scanf ("%f" ,&panjang);
	printf ("Masukkan lebar : "); scanf ("%f" ,&lebar);
	printf ("Masukkan tinggi : "); scanf ("%f",&tinggi);
	luas=(2*panjang*lebar)+(2*panjang*tinggi)+(2*tinggi*lebar);
	printf ("Jadi luasnya adalah : %d\n", luas);

	printf ("Masukkan panjang : "); scanf ("%f" ,&panjang2);
	printf ("Masukkan lebar : "); scanf ("%f" ,&lebar2);
	printf ("Masukkan tinggi : "); scanf ("%f",&tinggi2);
	volume = panjang2*lebar2*tinggi2;
	printf ("Jadi volumenya adalah : %d\n" , volume);
}
