/*
    Dizi ve Katar

                                                                Kamil Bala


*/
#include<iostream>
using namespace std;


int main()
{
    char dizi[4];
    char katar[5];


    cout << "İlk ismin karakterlerini giriniz: " << endl;

    for(int i=0; i < 4; i++) cin >> dizi[i];

    cout << "İkinci ismin karakterlerini giriniz: " << endl;

    for(int i=0; i < 4; i++)  cin >> katar[i];

    // Dizinin son elemanini \0 giriyoruz
    katar[4] = '\0';

    cout << "ilk isim: ";

    for(int i=0; i < 4; i++) cout << dizi[i];

    cout << "\nikinci isim: ";

    cout << katar;


    return 0;
}
