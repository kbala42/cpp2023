/*
    Ogrencilerin nor ortalmasini hesaplama

                                                        Kamil Bala

    Görev 3: Rafet öğretmen sınıfında bulunan 10 öğrencinin matematik dersinde aldığı notları
    klavyeden teker teker girerek sınıfın matematik dersi not ortalamasını bulan bir program
    yazmak istiyor. Bunun için nasıl bir kod yazmalıdır?

                                                        Deneyap Yazılım Teknolojileri Lise
*/
#include<iostream>
using namespace std;

int main()
{
    int girilenNot = 0, notToplam=0, ortalama;

    for(int sayac=1; sayac<=10;sayac++)
    {
        cout<<sayac<<" . ogrenin notunu giriniz: "; cin>> girilenNot;

        notToplam += girilenNot;
    }
    ortalama = notToplam/10;

    cout<<" Sinifin ortalamasi: "<<ortalama;
    return 0;
}
