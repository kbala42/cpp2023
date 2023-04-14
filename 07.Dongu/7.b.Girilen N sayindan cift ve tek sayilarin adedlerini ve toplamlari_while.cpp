/*
    Kullanicinin gircegi N sayindan cift ve tek sayilarin adedlerini
    ve toplamlarini, cift sayilarin ve tek sayilarin ortalamlarini bulan program

    while

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int adet, sayi, sayac=1;

    int ciftAdet=0, ciftToplam=0;

    int tekAdet=0, tekToplam=0;

    cout<<"Kac sayi gireceksiniz:";cin>>adet;

    while(sayac<=adet)
    {
        cout<<sayac<<". sayiyi girin:";cin>>sayi;

        if (sayi%2 == 0)
        {
            ciftAdet++;
            ciftToplam+=sayi;
        }
        else
        {
            tekAdet++;
            tekToplam+=sayi;
        }
        sayac++;
    }
    cout<<"\n*** Sonuc ***\n";

    cout<<"\nCift sayilarin adedi:"<<ciftAdet<<endl;

    cout<<"\nCift sayilarin toplami:"<<ciftToplam<<endl;

    cout<<"\nTek sayilarin adedi:"<<tekAdet<<endl;

    cout<<"\nTek sayilarin toplami:"<<tekToplam<<endl;

    return 0;

}
