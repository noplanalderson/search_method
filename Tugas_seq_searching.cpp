#include<stdio.h>
#include<iostream>

using namespace std;

/*---------------------------------------------------------------------------
 | PROGRAM SEQUENTIAL SEARCHING DENGAN TIPE DATA STRING MENGGUNAKAN C++
 |---------------------------------------------------------------------------
 |
 | Author	: Muhammad Ridwan Na'im
 | Kelas 	: 02TPLE001
 | NIM   	: 211011450453
 |
*/

void SequentialSearching(string DataNama[], int n, string nama, bool *ketemu);

int main()
{
	cout<<"#############################################################################\n";
	cout<<"#                                                                           #\n";
	cout<<"#  PROGRAM SEQUENTIAL SEARCHING DENGAN ARRAY BERISI STRING MENGGUNAKAN C++  #\n";
	cout<<"#                                                                           #\n";
	cout<<"#  Author: Muhammad Ridwan Na'im                                            #\n";
	cout<<"#  Kelas : 02TPLE001                                                        #\n";
	cout<<"#  NIM   : 211011450453                                                     #\n";
	cout<<"#                                                                           #\n";
	cout<<"#############################################################################\n";

	string DataNama[] = {"Ronaldo", "Mark Klock", "Egy", "Kambuaya", "Witan", "Nadeo"};
	string nama;

	int n, jumlahData = 6;
	bool ketemu;

	for (int i = 0; i < jumlahData; i++)
	{
		cout<<"Cari nama: ";cin>>nama;
		SequentialSearching(DataNama, jumlahData, nama, &ketemu);
		if(ketemu == true)
		{
			cout<<"Nama "<<nama<<" ditemukan!"<<endl;
		}
		else
		{
			cout<<"Nama yang "<<nama<<" tidak ada dalam array"<<endl;
		}
	}
}

void SequentialSearching(string DataNama[], int n, string nama, bool *ketemu)
{
	int i=0;
	*ketemu=false;

	while(i<n && !(*ketemu))
	{
		if(DataNama[i] == nama) *ketemu=true;
		else i++;
	}
}
