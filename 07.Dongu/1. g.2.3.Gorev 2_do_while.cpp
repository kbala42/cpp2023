/*
    Ali kardeşi Buğra’nın 1’den 30’a kadar 3’erli olarak sayı saymasını istemektedir.
    Buradan hareketle kardeşinin doğru sayıp saymadığını kontrol etmesi için bilgisayarda
    1’den 30’a kadar küçükten büyüğe olacak şekilde 3’e bölünebilecek sayıları ekranda
    göstermek istiyor. Bunun için nasıl bir kod yazmalı?


    Alinti:
    Deneyap Ortaokul Yazýlým Teknolojileri
    whilw cozumu

                                                        Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int sayac=1;

    do
    {
        if (sayac%3 == 0) cout<<sayac<<endl; // uce bolundugunde kalan 0 ise yani uce kalansiz bolunuyorsa
                                             // sayacin o anki degerini yaz
        sayac++;
    }while(sayac<30);

    return 0;
}
