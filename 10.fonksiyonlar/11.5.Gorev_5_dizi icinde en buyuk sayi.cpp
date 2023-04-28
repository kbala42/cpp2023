/*
    Fonksiyona gönderilen dizi içinde en büyük olanı
    geriye döndüren fonksiyonu yazalım.


                        Kamil Bala

    Alıntı Deneyap Yazılım Teknolojileri Ortaokul
*/
#include<iostream>
using namespace std;

void en_buyuk(int sayilar[])
{
    int enBuyuk=sayilar[0];

    for(int i=1; i<5; i++ )
    {
        if(enBuyuk<sayilar[i]) enBuyuk=sayilar[i];
    }
    cout<<"En buyuk: "<<enBuyuk<<endl;
}

int main()
{
    int sayilar[] = {5,3,4,5,8};
    en_buyuk(sayilar);


    return 0;
}
