/*
    Şifreleme uygulamasi

                                                                Kamil Bala

*/
#include<iostream>
using namespace std;


int main()
{
    int sayi, sayiDizisi[4], secim;

    cout<<"Sifreleme (1), Sifre Cozme(2) seciniz: "; cin>>secim;

    cout<<"4 basamakli bir sayi girin: ";cin>>sayi;

    sayiDizisi[0] = sayi%10;
    sayiDizisi[1] = (sayi/10)%10;
    sayiDizisi[2] = (sayi/100)%10;
    sayiDizisi[3] = sayi/1000;

    for(int i=0;i<4;i++) cout<<sayiDizisi[i]<<"\t";

    cout<<endl;

    if (secim == 1)
    {
        int takas;

        for(int i=0; i<4; i++)
        {
            sayiDizisi[i] = (sayiDizisi[i]+5) %10;
        }
        takas = sayiDizisi[1];
        sayiDizisi[1] = sayiDizisi[3];
        sayiDizisi[3] = takas;

        takas = sayiDizisi[0];
        sayiDizisi[0] = sayiDizisi[2];
        sayiDizisi[2] = takas;

        cout<< "sifrelenmis sayi: ";
        for(int i=0; i<4; i++) cout<<sayiDizisi[i];
    }
    else
    {
        int takas;

        for(int i=0; i<4; i++)
        {
            sayiDizisi[i] = (((sayiDizisi[i]-5))+10) %10;
        }
        takas = sayiDizisi[1];
        sayiDizisi[1] = sayiDizisi[3];
        sayiDizisi[3] = takas;

        takas = sayiDizisi[0];
        sayiDizisi[0] = sayiDizisi[2];
        sayiDizisi[2] = takas;

        cout<< "Cozulen sayi: ";

        for(int i=0; i<4; i++) cout<<sayiDizisi[i];
    }

    return 0;
}
