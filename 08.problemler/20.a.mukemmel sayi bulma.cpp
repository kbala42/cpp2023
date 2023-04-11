/*
    Girilen bir say�n�n m�kemmel olup olmad���n� bulan program

    Bir sayin�n kendi hari� b�lenlerinin toplam� kendine e�itse bu sayiya "m�kemmel sayi" denir.

    �rnek olarak, 6 m�kemmel bir sayid�r. (1 + 2 + 3 = 6)

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;



int main()
{
    int sayi, sayac = 1, toplam = 0;

    cout<< "Bir sayi giriniz:"; cin>> sayi;

    while(sayac < sayi) // sayac degeri sayi'dan kucuk oldugu surece devam et
    {
        if ( sayi % sayac == 0) // o an ki sayac degerine tam bolunuyor mu?
            toplam += sayac; // sayac o ani icerigini toplam ile toplayarak yeni toplam'i elde et

        sayac++;
    }
    if (toplam == sayi) cout<<sayi<< " mukemmel bir sayidir."<<endl;
    else cout<<sayi<< " mukemmel bir sayi degildir"<<endl;


    return 0;

}
