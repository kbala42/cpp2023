/*
    Bir basketbol takımının koçu, oyuncularının ad-soyad, forma numarası ve attığı
    basket bilgilerini tutmak için bir program hazırlamak ister. Koç bunun için örnek bir program
    yazar. Programda örnek olarak Basketbolcu sınıf yapısı ve bu sınıfa ait 2 basketbolcu nesnesi
    bulunmaktadır. Koçun yazdığı örnek kodu tasarlayınız.
*/
#include<iostream>

using namespace std;

class Basketbolcu
{
public:
string ad_soyad;
int forma_no;
int basket_sayisi;
Basketbolcu(string x_ad_soyad, int x_forma_no, int x_basket_sayisi){
ad_soyad = x_ad_soyad;
forma_no = x_forma_no;
basket_sayisi = x_basket_sayisi;
}
};


int main()
{

    Basketbolcu b1("Mirsad Turkcan", 5 , 21);
    Basketbolcu b2("Semih Erden", 9, 15);
    cout << b1.ad_soyad << " " << b1.forma_no << " " << b1.basket_sayisi << "\n";
    cout << b2.ad_soyad << " " << b2.forma_no << " " << b2.basket_sayisi << "\n";
    return 0;
}
