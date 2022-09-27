#include<stdio.h>
#include<iostream>

using namespace std;
/**
 * main
 *
 * @author Muhammad Ridwan Na'im
 * @NIM 211011450453
 * @return void
*/
int main()
{
    int nilai;

    cout<<"Masukkan nilai (dua digit terkahir NIM):";
    cin>>nilai;

    if(nilai <= 100 && nilai >= 81)
    {
        cout<<"A\n";
    }
    else if(nilai < 81 && nilai >= 71)
    {
        cout<<"B\n";
    }
    else if(nilai < 71 && nilai >= 61)
    {
        cout<<"C\n";
    }
    else if(nilai < 61 && nilai >= 51)
    {
        cout<<"D\n";
    }
    else if(nilai < 51)
    {
        cout<<"E\n";
    }
}