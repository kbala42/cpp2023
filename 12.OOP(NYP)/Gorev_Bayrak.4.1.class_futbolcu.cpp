/*
    Bir futbol takımının teknik direktörü, futbolcuların ad-soyad, forma numarası ve
    attığı gollerin sayısını tutmak için bir program hazırlamak ister. Teknik direktör bunun için
    örnek bir program yazar. Programda örnek olarak Futbolcu sınıf yapısı ve bu sınıfa ait 2
    futbolcunun bilgileri nesne olarak tutulmaktadır. Bu programın kodlarını tasarlayınız
*/
#include<iostream>

using namespace std;

class Futbolcu{
    public:
        string ad_soyad;
        int forma_no;
        int gol_sayisi;

        Futbolcu(string x_ad_soyad, int x_forma_no, int x_gol_sayisi)
        {
            ad_soyad = x_ad_soyad;
            forma_no = x_forma_no;
            gol_sayisi = x_gol_sayisi;
        }
};
int main()
{

    Futbolcu f1("Arda Alp", 21 , 13);
    Futbolcu f2("Burakcem", 23, 17);
    cout << f1.ad_soyad << " " << f1.forma_no << " " << f1.gol_sayisi << "\n";
    cout << f2.ad_soyad << " " << f2.forma_no << " " << f2.gol_sayisi << "\n";

    return 0;
}
