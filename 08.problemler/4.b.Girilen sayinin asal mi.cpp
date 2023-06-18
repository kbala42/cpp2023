/*
    Girilen sayının asal mı?

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int sayi;
    cout<<"Sayi giriniz: "; cin>>sayi;


    int sayac = 0;
    for(int i=2; i<sayi/2;i++)
    {
        if(sayi % i ==0)
            sayac++;
        if(sayac == 1)
            break;
    }
    if(sayac==0)
        cout<<"Asal sayi";
    else
        cout<<"Asal sayi degildir";


    return 0;

}
