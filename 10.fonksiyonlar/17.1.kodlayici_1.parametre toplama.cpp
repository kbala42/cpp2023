/*
    Parametre olarak gönderilen iki sayının toplamını geriye döndüren bir
    fonksiyonu oluşturmak isteseydiniz nasıl bir kod yazardınız?

                        Kamil Bala

    Alıntı Deneyap Yazılım Teknolojileri Ortaokul
*/
#include<iostream>
using namespace std;

int topla(int sayi1, int sayi2)
{
    int toplam = sayi1 + sayi2;
    return toplam;
}
int main()
{
    int sonuc = topla(5,4);
    cout<< sonuc;
    return 0;
}
