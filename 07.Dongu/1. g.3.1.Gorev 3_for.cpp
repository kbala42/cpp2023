/*
    Rafet öğretmen sınıfında bulunan 10 öğrencinin matematik dersinde aldığı notları 
    klavyeden teker teker girerek sınıfın matematik dersi not ortalamasını bulan bir
    program yazmak istiyor. Bunun için nasıl bir kod yazmalıdır?

    for


    Alinti:
    Deneyap Ortaokul Yazýlým Teknolojileri
    for cozumu

                                                        Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int sayi, toplam = 0;

    for(int sayac=1; sayac<=10;sayac++)
    {
        cout<< sayac << ". ogrencinin notunu giriniz:"; cin>>sayi;
        toplam += sayi;

    }
    cout<< "Ortalama: "<< (float)toplam/10<<endl;

    return 0;
}
