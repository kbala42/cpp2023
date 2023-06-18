/*
Macerac�lar�n haritadaki ilk dura�� Ka��k Adas�. Ka��k Adas��na ula�malar� i�in bir tekne
bulmalar� gerekiyor. Ellerindeki tek teknenin ise tadilata ihtiyac� var. Tadilat i�in 8 tane k�sa
ince tahta, 7 tane uzun ince tahta ve 12 tane uzun kal�n tahta kullanacaklar. Bunun i�in
�demeleri gereken �creti tahta fiyat listesinden hesaplamalar� laz�m. ��te maceralar�m�z ilk
problemleriyle kar��la�m��t�r. Bunun i�in bir ak�� diyagram� olu�turmaya karar verirler. Bu ak��
diyagram�nda tahtalar�n adedi, boyu ve kal�nl���na ili�kin bilgilerin kullan�c� taraf�ndan
girilmesi isteniyor.
Macerac�lar ak�� diyagram�n�n sonunda ihtiya� listesine �denecek toplam de�eri hesaplay�nca,
Ka��k Adas��na giri� �ifresini ��zm�� olacaklar. Bu g�revde macerac�lara yard�m ediniz.

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
