/*
    0-100 arasında rastgele üretilen 10 tam sayı yazdırma

                                                        Kamil Bala
     https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
*/
#include<iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int rastgeleSayi;

    int toplam = 0, tekAdet=0, ciftAdet=0, tekToplam = 0, ciftToplam = 0;

    int

    srand(time(0));

    for(int sayac=0; sayac<10; sayac++)
    {
        rastgeleSayi = rand() % 100;

        toplam += rastgeleSayi;

        cout << rastgeleSayi <<endl;

        if(rastgeleSayi % 2 == 0)
        {
            ciftAdet++;
            ciftToplam += rastgeleSayi;
        }
        else
        {
            tekAdet++;
            tekToplam+=rastgeleSayi;
        }
    }

        cout<<"Sayilarin toplami: "<< toplam << endl;

        cout<<"Sayilarin ortalamasi: "<< toplam/10 << endl;

        cout<<"Tek sayilarin adedi: "<< tekAdet  << endl;

        cout<<"Tek sayilarin toplami: "<< tekToplam  << endl;

        cout<<"Tek sayilarin ortalamasi: "<< tekToplam/tekAdet  << endl;

        cout<<"Cift sayilarin adedi: "<< ciftAdet  << endl;

        cout<<"Cift sayilarin toplami: "<< ciftToplam  << endl;

        cout<<"Cift sayilarin ortalamasi: "<< ciftToplam / ciftAdet << endl;



    return 0;
}
