/*
    Girilen sayiya kadarki sayilari ekrana yazdiran program

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int sayac = 0, sonSayi;

    cout<< "Kaca kadar ki sayilari yazdiralim:";
    cin>> sonSayi;

    while(sayac <= sonSayi)
    {
        cout<<sayac<<endl;
        sayac++;
    }

    return 0;
}
