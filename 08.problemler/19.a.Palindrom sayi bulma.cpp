/*
    Palindrom Sayi Bulma

    Girilen sayinin rakamlarinin duzden ve tersten okunuslari ayni olan sayilardir

    2552 6776 gib

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;



int main()
{
    int sayi, sayiSakla, rakam, sonuc = 0;

    cout<< "Bir sayi giriniz:"; cin>> sayi;

    sayiSakla = sayi;

    while(sayi != 0) // sayi 0 dan farkli oldugunca devam et
    {
        rakam = sayi %  10; // 10 a bol kalani bul
        sonuc = sonuc * 10 + rakam;// onceki sonuc ile 10 carp elde ettigin rakamla topla
        sayi /= 10; //sayiyi 10a bol sonucta sakla
    }

    if (sayiSakla == sonuc ) // saklanan sayi elde ettigin sayiya esit mi?
    {
        cout<< sayiSakla << " sayisi bir palindrom bir sayidir"<<endl;
    }
    else{
        cout<< sayiSakla << " sayisi bir palindrom bir sayi degildir"<<endl;
    }

    return 0;

}
