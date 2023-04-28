/*
    Bir bilgisayar programında, iki adet fonksiyon bulunmaktadır. İlk fonksiyonda, yaş
    bilgisi alınmakta ve fonksiyon içerisinde güncellenmektedir. Bu güncellenen değer ana
    program bloğunu etkilememektedir. İkinci fonksiyonda alınan yaş bilgisi fonksiyon içerisinde
    güncellenmekte ve değişiklik ana programda etkili olmaktadır. Bunun için nasıl bir program
    yazmalıyız?

                        Kamil Bala

    Alıntı Deneyap Yazılım Teknolojileri Lise
*/
#include<iostream>
using namespace std;

void fonksiyon1(int sayi)
{
    sayi = 20;
}
void fonksiyon2(int& sayi)
{
    sayi = 21;
}
int main()
{
    int yas = 19;

    fonksiyon1(yas);
    cout<<yas <<endl;

    fonksiyon2(yas);
    cout<<yas <<endl;
}
