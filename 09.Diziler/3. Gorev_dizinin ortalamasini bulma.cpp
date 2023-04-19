/*
    Bir dizinin ortalamasını bulma

                                                                Kamil Bala

    Tasarlayıcı: Fadime, 10 arkadaşının Facebook beğeni sayılarının toplamını ve beğeni
    ortalamalarını merak etmektedir. Bu amaçla bir program yazmak ister, ancak yardıma ihtiyacı
    vardır. Fadime için bu programı sen tasarlar mısın?

    Deneyap Yazılım Teknolojileri


*/
#include<iostream>
using namespace std;


int main()
{

    int sayilar[] = {17, 13, 12, 9, 6, 11, 3, 14, 2, 19};
    int toplam = 0, n = 10;
    float ort;

    cout << "Dizi: " << endl;

    for (int i=0; i < n; i++)
    {
        cout << sayilar [i] << " ";
        toplam += sayilar[i];
    }

    cout << "\nDizinin toplami: " << toplam << endl;

    ort = (float)toplam / n;

    cout << "Dizinin ortalamasi: " << ort << endl;

    return 0;
}
