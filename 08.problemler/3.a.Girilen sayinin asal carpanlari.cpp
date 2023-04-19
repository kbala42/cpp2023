/*
    Girilen sayının asal çarpanlarını bulma

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int sayi, bolen=2;

    cout<<"Sayi giriniz:"; cin>>sayi;

    while(sayi>=bolen) // sayi icerigi bolenden buyuk ve esit oldugu surece dongumuz devam ediyor
    {
        if(sayi % bolen == 0) // sayi bolene tam bolunuyorsa tam bolenidir
        {
            sayi /= bolen; // bolum sayisini elde ederek sayinin yeni degeri olarak atiyoruz
            cout<<bolen<<endl;
        }
        else bolen++; // degilse boleni 1 arttiriyoruz
    }



    return 0;

}
