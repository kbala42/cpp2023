/*
    Bir dizide en buyuk elemani ve indisini bulma

                                                                Kamil Bala



*/
#include<iostream>
using namespace std;


int main()
{
    int sayilar[] = {19, 11, 21, 13, 15};

    cout << "Dizi elemanlari: ";

    for(int i=0; i < 5; i++) cout << sayilar[i] << " ";

    int enBuyuk = sayilar[0]; // ilk elemani (0. indisli) en buyuk sayi olarak atiyoruz
    int enBuyukIndis = 0; // ilk elemanin indisini 0 olarak tutuyoruz

    for(int i=1; i < 5; i++)
    {
        if(enBuyuk < sayilar[i])
        {
            enBuyuk = sayilar[i];
            enBuyukIndis = i;
        }
    }
    cout << endl;
    cout << "En buyuk elman: "<< enBuyuk << endl;
    cout << "En buyuk elman indisi: "<< enBuyukIndis << endl;

    return 0;
}
