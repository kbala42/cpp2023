/*
    1 ile 100 arası sayılardan 7 ye bolunenleri ekrana yazdıran program

                                                        Kamil Bala

    Ali kardeşi Buğra’nın 1’den 100’e kadar 7’şerli olarak sayı saymasını istemektedir.
    Buradan hareketle kardeşinin doğru sayıp saymadığını kontrol etmesi için bilgisayarda 1’den
    100’e kadar küçükten büyüğe olacak şekilde 7’ye bölünen sayıları ekranda göstermek istiyor.
                                                        Deneyap Yazılım Teknolojileri Lise
*/
#include<iostream>
using namespace std;

int main()
{
    for(int sayac=1; sayac<=100;sayac++)
    {
        if(sayac%7==0) cout<<sayac<<endl;
    }

    return 0;
}
