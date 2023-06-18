/*
Maceracýlarýn haritadaki ilk duraðý Kaþýk Adasý. Kaþýk Adasý’na ulaþmalarý için bir tekne
bulmalarý gerekiyor. Ellerindeki tek teknenin ise tadilata ihtiyacý var. Tadilat için 8 tane kýsa
ince tahta, 7 tane uzun ince tahta ve 12 tane uzun kalýn tahta kullanacaklar. Bunun için
ödemeleri gereken ücreti tahta fiyat listesinden hesaplamalarý lazým. Ýþte maceralarýmýz ilk
problemleriyle karþýlaþmýþtýr. Bunun için bir akýþ diyagramý oluþturmaya karar verirler. Bu akýþ
diyagramýnda tahtalarýn adedi, boyu ve kalýnlýðýna iliþkin bilgilerin kullanýcý tarafýndan
girilmesi isteniyor.
Maceracýlar akýþ diyagramýnýn sonunda ihtiyaç listesine ödenecek toplam deðeri hesaplayýnca,
Kaþýk Adasý’na giriþ þifresini çözmüþ olacaklar. Bu görevde maceracýlara yardým ediniz.

8hh
7eh
12ee
1568
*/

#include<iostream>
using namespace std;

int main()
{
    int adet, tahtaAdet, fiyat, tutar, toplamTutar=0;
    char uzunMu, kalinMi;

    cout<<"Kac adet siparis yapacaksiniz: "; cin>>adet;

    for(int i=1; i<=adet; i++)
    {
        cout<<i<<".sipariste kac adet tahta alacaksiniz: ";cin>>tahtaAdet;

        cout<<"Tahtalar uzun mu (Evet: e) Hayirsa:h giriniz:";cin>>uzunMu;

        if(uzunMu=='e')
        {
            cout<<"Tahtalar kalin mi (Evet: e) Hayirsa:h giriniz:";cin>>kalinMi;

            if(kalinMi=='e' || kalinMi=='E')
            {
                fiyat = 78;
            }
            else
            {
                fiyat = 64;
            }
        }
        else
        {
            cout<<"Tahtalar kalin mi (Evet: e) Hayirsa:h giriniz:";cin>>kalinMi;

            if(kalinMi=='e')
            {
                fiyat = 35;

            }
            else
            {
                fiyat = 23;

            }

        }

        tutar = tahtaAdet * fiyat;
        toplamTutar += tutar;
    }
    cout<<"Toplam deger:"<< toplamTutar;
    return 0;
}
