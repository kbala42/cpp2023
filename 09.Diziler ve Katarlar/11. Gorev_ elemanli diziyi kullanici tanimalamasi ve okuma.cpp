/*
    5 elemanlı bir diziyi tanımlama ve okuma

                                                                Kamil Bala

    Örnek olay: Fatma öğretmen sınıfındaki beş öğrencisinin Matematik sınav
    notlarını bir program kullanarak listelemek istemektedir. Bunun için
    öğrencilerinden biri aşağıdaki kodları tasarlamaktadır.

    Deneyap Yazılım Teknolojileri Orta
*/
#include<iostream>
using namespace std;


int main()
{
    int notlar[5]; // Dizinin bildirimini yapıyoruz

    // Dizi elemanlarini sirayla tanimliyoruz

    for(int sayac=1; sayac<=5; sayac++)
    {
        cout << sayac << ". ogrenci notunu giriniz: ";
        cin >> notlar[sayac];
    }

    // Girdigimiz elemanlari  sirayla okuyoruz

    for(int sayac=1; sayac<=5; sayac++)
    {
        cout << sayac << ". ogrencinin notu: " << notlar[sayac] << endl;
    }
    return 0;
}
