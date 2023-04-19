/*
    Verilen dizi içinde 5 bolunen sayýlarý bulma

                                                                Kamil Bala



*/
#include<iostream>
using namespace std;


int main()
{
    int sayilar[100];

    int adet, adet5bolunen=0;

    cout << "Kac elemanli dizi gireceksiniz: "; cin >> adet;

    cout<<"\nDizi elemanlarini girin :\n";

    for(int i=0; i<adet; i++)
    {
        cout << i+1 << ". eleman-> dizi[" << i << "]: ";
        cin >> sayilar[i];
    }

    for(int i=0; i<adet; i++)
    {
        if(sayilar[i]%5==0) adet5bolunen++;
    }

    cout << "\n5 ile bolunebilen eleman sayisi: " << adet5bolunen;

    return 0;
}
