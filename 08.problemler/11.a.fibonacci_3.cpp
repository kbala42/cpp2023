/*
    Fibonacci dizisi

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int nEleman; // Kacinci elemana kadar hesaplanacak
    int ilk = 0, son = 1; // ilk iki elenai giriyoruz
    int yeni;// Sirada ki hesaplayacagimiz eleman

    cout<<"Kacinci elemana kadar hesaplayacagiz:";cin>>nEleman;

    for (int sayac=0; sayac < nEleman; sayac++ )
    {
        cout << ' ' << ilk;
        yeni = ilk + son;
        ilk = son;
        son = yeni;
    }

    return 0;

}
