/*
    Girilen sayiya kadarki sayilarin toplamini yazdiran program

    while Döngüsü
                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int toplam=0, sayac =0, sonSayi;

    cout<< "Kaca kadar ki sayilari toplayalim:";
    cin>> sonSayi;

    while(sayac <= sonSayi)
    {
        toplam += sayac;
        sayac++;
    }
    cout<<toplam<<endl;

    return 0;
}
