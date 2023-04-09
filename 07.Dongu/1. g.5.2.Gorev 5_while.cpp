/*
    Ahmet okul kütüphanesindeki raflara herkesin kolayca kitapları bulabilmesi için
    sayı etiketleri yapıştırmak istiyor. Kütüphanede 30 tane raf olduğu düşünülürse
    Ahmet’in 1 den 30’a kadar sayıları sıralayıp ekranda göstermesi gerekmektedir.
    Buradan hareketle Ahmet’in nasıl bir kod yazması gereklidir,
    bilgisayarımızda kodlayalım.

    Alinti:
    Deneyap Ortaokul Yazýlým Teknolojileri
    while cozumu

                                                        Kamil Bala

   https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
*/
#include<iostream>

using namespace std;

int main()
{

    int sayac=1;

    while(sayac<=30)
    {
        cout << sayac <<endl;
        sayac++;
    }


    return 0;
}
