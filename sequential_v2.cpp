#include<stdio.h>
#include<iostream>

using namespace std;

/*---------------------------------------------------------------------------
 | PROGRAM SEQUENTIAL V2 DENGAN ARRAY BERISI STRING MENGGUNAKAN C++
 |---------------------------------------------------------------------------
 |
 | Author	: Muhammad Ridwan Na'im
 | Kelas 	: 02TPLE001
 | NIM   	: 211011450453
 |
*/

void SequentialSearching(string DataNama[], int n, string nama, bool *ketemu, int *index);

int main()
{
	cout<<"#############################################################################\n";
	cout<<"#                                                                           #\n";
	cout<<"#      PROGRAM SEQUENTIAL V2 DENGAN ARRAY BERISI STRING MENGGUNAKAN C++     #\n";
	cout<<"#                                                                           #\n";
	cout<<"#############################################################################\n";
	cout<<"#                                                                           #\n";
	cout<<"#  Author: Muhammad Ridwan Na'im                                            #\n";
	cout<<"#  Kelas : 02TPLE001                                                        #\n";
	cout<<"#  NIM   : 211011450453                                                     #\n";
	cout<<"#                                                                           #\n";
	cout<<"#############################################################################\n\n";

	string DataNama[] = {"Ronaldo", "Mark Klock", "Egy", "Kambuaya", "Witan", "Nadeo"};
	string nama;

	int n, jumlahData = 6, index;
	bool ketemu;

	for (int i = 0; i < jumlahData; i++)
	{
		cout<<"Cari nama: ";cin>>nama;
		SequentialSearching(DataNama, jumlahData, nama, &ketemu, &index);
		if(ketemu == true)
		{
			cout<<"Nama "<<nama<<" ditemukan pada index ke-"<<index<<endl;
		}
		else
		{
			cout<<"Nama "<<nama<<" tidak ada dalam array"<<endl;
		}
	}
}

void SequentialSearching(string DataNama[], int n, string nama, bool *ketemu, int *index)
{
	int i=0;
	*ketemu=false;

	while(i<n && !(*ketemu))
	{
		if(DataNama[i] == nama) {
			*index = i;
			*ketemu=true;
		}
		else i++;
	}
}
