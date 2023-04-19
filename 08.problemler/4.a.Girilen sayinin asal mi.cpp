/*
    Girilen sayının asal mı?

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    bool asalMi=true;
    int sayi;

    for(int i=2; i<1000; i++)
    {
        for(int sayac = 2; sayac<=i/2; sayac++)
        {
            if(sayi % sayac == 0) // sayi, sayac'in o anki iceregine tam bolunuyorsa asal degildir
            {
                asalMi = false;
                break;
            }
            else cout<<sayi<<endl;
        }
        asalMi=true;
    }


    return 0;

}
