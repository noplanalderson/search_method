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
    int x;
    cout<<"Masukkan nilai X (digit terakhir NIM):";
    cin>>x;

    if(x > 0) {
        cout<<"X adalah bilangan positif\n";
    }
    else if(x < 0) {
        cout<<"X adalah bilangan negatif\n";
    }
    else
    {
        cout<<"X adalah bilangan 0\n";
    }
}