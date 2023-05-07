/*
    Karde� olan iki peyzaj ustas� kare �eklinde olan bah�elerine
    peyzaj yapmak istiyor.

    Her ikisi de kendi bah�elerine �it gerecektir.
    �it i�in kare �eklindeki iki bah�enin kenar bilgilerini �l�erek,
    bah�elerin �evresini hesaplayan bir program tasarlarlar.

    Ancak program d�zg�n �al��mamaktad�r. Program� d�zeltmek zorundalar
    ��nk� �evrelerini hesaplayacaklar� daha pek �ok bah�e var. Bu iki
    karde�e program� ba�tan tasarlamalar� i�in yard�m ediniz.

    �pucu! Ustan�n kulland��� hatal� programda s�n�f i�erisinde kullan�lacak
    kenar bilgisi de�er atama yoluyla ger�ekle�irken, fonksiyon tan�mlama
    s�n�f d���nda yaz�lm��t�r. Tasarlayaca��n�z kodda bu detaylar�n bulunmas�na
    dikkat ediniz.

    Al�nt�: Deneyap Yaz�l�m Teknolojileri

*/


#include<iostream>
using namespace std;

class Kare {

    private:
        float Kenar;

    public:
        void degerAtama(float);

        float cevre()
        {
            return 4 * Kenar;
        }
};

void Kare::degerAtama (float kenar) {
    Kenar = kenar;
}

int main()
{
    Kare kare;

    kare.degerAtama (4.3);

    cout<<"Kare Cevresi: "<<kare.cevre()<<"\n";

    return 0;
}
