/*
    Girilen bir sayýnýn çift mi? tek mi ? oldugunu bulan program

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int sayi;

    cout<< "Bir sayi giriniz: ";
    cin>>sayi;

    (sayi%2 == 0)? cout<<"Girdiginiz sayi cifttir " : cout<<"Girdiginiz sayi tektir ";



    return 0;
}
