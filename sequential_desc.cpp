#include<stdio.h>
#include<iostream>
#include <bits/stdc++.h>

using namespace std;

/*---------------------------------------------------------------------------
 | PROGRAM SEQUENTIAL SORT DESCENDING MENGGUNAKAN C++
 |---------------------------------------------------------------------------
 | Program pencarian ini akan mengembalikan index array dan data yang dicari,
 | yang terlebih dahulu diurutkan secara descending.
 |
 | Author	: Muhammad Ridwan Na'im
 | Kelas 	: 02TPLE001
 | NIM   	: 211011450453
 |
*/

void SequentialSearching(int Data[], int n, int angka, bool *ketemu, int *index);

int main()
{
	cout<<"#############################################################################\n";
	cout<<"#                                                                           #\n";
	cout<<"#            PROGRAM SEQUENTIAL SORT DESCENDING MENGGUNAKAN C++             #\n";
	cout<<"#                                                                           #\n";
	cout<<"#############################################################################\n";
	cout<<"#                                                                           #\n";
	cout<<"#  Author: Muhammad Ridwan Na'im                                            #\n";
	cout<<"#  Kelas : 02TPLE001                                                        #\n";
	cout<<"#  NIM   : 211011450453                                                     #\n";
	cout<<"#                                                                           #\n";
	cout<<"#############################################################################\n\n";

	int Data[] = {50,64,12,23,12,45,4,90,1002,453};
	int angka, index, jumlahData = 10;
	bool ketemu;

    sort(Data, Data + jumlahData, greater<int>());

	for (int i = 0; i < jumlahData; i++)
	{
		cout<<"Cari angka: ";cin>>angka;
		SequentialSearching(Data, jumlahData, angka, &ketemu, &index);
		if(ketemu == true)
		{
			cout<<"Angka "<<angka<<" ditemukan pada index ke-"<<index<<endl;
		}
		else
		{
			cout<<"Angka "<<angka<<" tidak ada dalam array"<<endl;
		}
	}
}

void SequentialSearching(int Data[], int n, int angka, bool *ketemu, int *index)
{
	int i=0;
	*ketemu=false;

	while(i<n && !(*ketemu))
	{
		if(Data[i] == angka) {
            *index = i;
            *ketemu=true;
        }
		else i++;
	}
}
