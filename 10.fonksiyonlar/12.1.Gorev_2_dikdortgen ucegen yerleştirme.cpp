/*
    Ekrana yazı yazdırma

    Dikdörtgen şeklinde olan büyük bir arazi üçgensel bölgelere
    ayrılmak istenmektedir. Bunun içinde araziye ne kadar üçgen
    sığabileceğini bulmak isteyen bir yazılımcı ihtiyaç duyduğu
    anda çağırabileceği üçgen alanının hesaplamasına yönelik bir
    fonksiyon yazmak istemektedir. Yazılımcı bu üçgen alan bulma
    fonksiyonunu nasıl kodlaması gerekmektedir?

    Taban Kenarı=2 cm
    Yükseklik=4 cm



                        Kamil Bala

    Alıntı Deneyap Yazılım Teknolojileri Ortaokul
*/
#include<iostream>
using namespace std;

double ucgenHesapla(int taban, int yukseklik)
{
    double alan = (taban*yukseklik) / 2;
    cout << alan << endl;

    return alan;
}
int main()
{
    ucgenHesapla(2,4);

    return 0;
}
