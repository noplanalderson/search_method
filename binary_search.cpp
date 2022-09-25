#include<bits/stdc++.h>
#include<iostream>
#include<string> 
using namespace std;

// Prototype Fungsi Sorting Array
void sortArray(string[], int); 

// Prototype Fungsi Binary Search
int binarySearch(string[], int, string);

// Konstanta jumlah data dalam array
const int SIZE = 22;

/**
 * Program pencarian array berisi string dengan metode binary search pada C++
 * 
 * @return void
*/
int main()
{
    cout<<"#############################################################################\n";
    cout<<"#                                                                           #\n";
    cout<<"#  PROGRAM BINARY SEARCHING DENGAN ARRAY BERISI STRING MENGGUNAKAN C++      #\n";
    cout<<"#                                                                           #\n";
    cout<<"#############################################################################\n";
    cout<<"#                                                                           #\n";
    cout<<"#  Author: Muhammad Ridwan Na'im                                            #\n";
    cout<<"#  Kelas : 02TPLE001                                                        #\n";
    cout<<"#  NIM   : 211011450453                                                     #\n";
    cout<<"#                                                                           #\n";
    cout<<"#############################################################################\n";

    // Definisikan Array
    const int NUM_NAMA = 22;
    string nama[NUM_NAMA] = {
        "Ridwan", "Herpiah", "Reza",
        "Isma", "Atiqa", "Desi",
        "Adrian", "Fajar", "Bambang",
        "Ravi", "Lulu", "Ridho",
        "Joko", "Arsah", "Bekti",
        "Dimas", "Hannysa", "Deva",
        "Umar", "Eric", "Robert", "Mifta"
    };

    // Variabel 
    string namaMhs; 
    int hasil;  

    // Urutkan array
    sortArray(nama, NUM_NAMA); 

    // Masukkan nama mahasiswa 
    cout << "Masukkan nama mahasiswa: "; 
    getline(cin, namaMhs); 

    // Cari nama dan simpan hasilnya ke dalam variabel hasil
    hasil = binarySearch(nama, NUM_NAMA, namaMhs); 

    // Jika hasil adalah -1 maka nama mahasiswa tidak ditemukan.
    if (hasil == -1)
        cout << "Nama tersebut tidak ada dalam array.\n";
    else
    {
        // Jika ditemukan, tampilkan nama dan index array-nya
        cout <<"Nama "<<namaMhs<<" ditemukan dalam array index ke-" << hasil<<endl;
    }

    return 0;
}

/**
 * Fungsi sortArray untuk mengurutkan isi array
 * 
 * @param nama array
 * @param size int
 * @return void
*/
void sortArray(string nama[], int size)
{
    int i, minIndex; 
    string minValue;

    for (i = 0; i < (size - 1); i++)
    {
        minIndex = i;
        minValue = nama[i];
        for(int index = i + 1; index < size; index++)
        {
            if (nama[index] < minValue)
            {
                minValue = nama[index];
                minIndex = index;
            }
        }
        nama[minIndex] = nama[i];
        nama[i] = minValue;
    }
}

/**
 * Fungsi Binary Search untuk melakukan pencarian dengan metode binary
 * pada array. Jika nama tidak ditemukan maka akan mengembalikan nilai -1.
 * 
 * @param  nama  array
 * @param  size  int
 * @param  value string
 * @return posisi int    
*/
int binarySearch(string nama[], int size, string value)
{
    int batasBawah = 0,
        batasAtas = size - 1,
        mid,
        posisi = -1;
    bool ditemukan = false;

    while (!ditemukan && batasBawah <= batasAtas)
    {
        mid = (batasBawah + batasAtas) / 2;
        if (nama[mid] == value)
        {
            ditemukan = true;
            posisi = mid;
        }
        else if (nama[mid] > value)
            batasAtas = mid - 1;
        else
            batasBawah = mid + 1;
    }

    return posisi;
}