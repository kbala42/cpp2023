/*
    Girilen N sayisina kadar

    1+ 1/2 + 1/3+ 1/4+ ... + 1/N

    hesaplayan programi yaziniz.
                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int sayi;
    float toplam;

    cout<<"Bir sayi giriniz:";cin>>sayi;

    for(int sayac=1; sayac<=sayi; sayac++)
    {
        toplam = toplam + 1.0/sayac;
    }
    cout<<"Toplam: "<<toplam;

    return 0;

}
