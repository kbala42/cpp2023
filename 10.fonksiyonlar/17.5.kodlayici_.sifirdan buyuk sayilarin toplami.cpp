/*
    Parametre olarak gönderilen dizi içerisindeki sıfırdan büyük sayıların
    toplamını bulup geriye döndüren bir fonksiyon yazınız

                                                        Kamil Bala

    Alıntı Deneyap Yazılım Teknolojileri Ortaokul
*/
#include<iostream>
using namespace std;

int dizi_topla(int dizi[5])
{
    int toplam = 0;
    for(int i=0;i<5;i++)
        if(dizi[i] > 0)toplam = toplam + dizi[i];
    return toplam;
}
int main()
{
    int sayilar[5] = {5,6,9,3,2};
    int sonuc = dizi_topla(sayilar);
    cout << sonuc;

    return 0;
}
