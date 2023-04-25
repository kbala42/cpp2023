/*
    Fonksiyona gönderilen iki sayıdan küçük olanı
    geriye döndüren fonksiyonu yazalım.





                        Kamil Bala

    Alıntı Deneyap Yazılım Teknolojileri Ortaokul
*/
#include<iostream>
using namespace std;

int hangisi_buyuk(int sayi1, int sayi2)
{
    if (sayi1>sayi2)
        return sayi1;
    else
        return sayi2;
}

int main()
{
    cout<<"5, 8 buyuk olan sayi: "<<hangisi_buyuk(5, 8)<<endl;

    cout<<"7, 6 buyuk olan sayi: "<<hangisi_buyuk(7, 6)<<endl;

    return 0;
}
