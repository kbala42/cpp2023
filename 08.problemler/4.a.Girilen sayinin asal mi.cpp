/*
    Girilen sayının asal mı?

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    bool asalMi=false;
    int sayi;
    cout<<"Sayi giriniz: "; cin>>sayi;

    for(int sayac = 2; sayac<=sayi/2; sayac++)
    {
        if(sayi % sayac == 0) // sayi, sayac'in o anki iceregine tam bolunuyorsa asal degildir
        {
                asalMi = true;
                cout<<sayi<<" asal bir sayi degildir"<< endl;
                break;
        }
    }

    if (asalMi == false) cout<<sayi<<" asal bir sayidir"<< endl;

    return 0;

}
