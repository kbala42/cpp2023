/*
    Girilen sayinin tersten yazilisi

    576 -> 675 gibi

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

    cout<<sayiSakla <<" sayisinin tersten yazilisi: " << sonuc <<endl;

    return 0;

}
