/*
    Klavyeden çift sayı girildikçe toplama işlemi yapan, tek sayı girildiği durumda ise girilen çift
    sayıların ortalamasını gösteren program

    Alinti:
    Deneyap Ortaokul Yazýlým Teknolojileri


                                                        Kamil Bala
*/

#include<iostream>
using namespace std;

int sayac = 1;

int main()
{
    int sayi, toplam=0, adet=0;

    do
    {
        cout<<"Bir sayi giriniz: ";cin>>sayi;

        if(sayi %2 == 0 )
        {
            toplam += sayi;
            adet++;
        }
    } while( sayi %2 == 0);

    cout<<"ortalama: "<<(float) toplam/adet << endl;
        sayac++;

    return 0;
}
