/*
    Girilen bir sayının "Armstrong" sayısı olup olmadığını bulan program

    Örnek olarak, Bir sayı eğer 4 basamaklı ise ve oluşturan rakamlardan\n
    herbirinin 4. kuvetinin toplamı( 3 basamaklı sayılar için 3.kuvveti ) o sayıya eşitse\n
    bu sayıya "Armstrong" sayısı denir.

    Örnek olarak : 1634 = 1^4 + 6^4 + 3^4 + 4^4

                                                                Kamil Bala

*/

#include<iostream>
#include<cmath>
using namespace std;



int main()
{
    int sayi, basamakSayisi, geciciSayi,toplam = 0, basamak = 0;

    cout<< "Bir sayi giriniz:"; cin>> sayi;

    basamakSayisi = log10(sayi) + 1;

    geciciSayi = sayi;

    while (geciciSayi > 0)
    {
        basamak = geciciSayi % 10;

        toplam += pow(basamak, basamakSayisi);

        geciciSayi = floor(geciciSayi / 10);
    }

    if (toplam == sayi) cout<<sayi<< " bir armstrong sayisidir."<<endl;
    else cout<<sayi<< " bir armstrong sayisi degildir."<<endl;


    return 0;

}
