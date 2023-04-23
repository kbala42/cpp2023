/*
    100’e kadar olan asal sayilari bulan program.
    .
                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

#include<math.h>

int main()
{
    bool asalMi=false;

    for(int sayi=2; sayi<100; sayi++)
    {
        for(int sayac = 2; sayac<=sayi/2; sayac++)
        {
            if(sayi % sayac == 0) // sayi, sayac'in o anki iceregine tam bolunuyorsa asal degildir
            {
                    asalMi = true;
                    break;
            }
            else asalMi=false;
        }

        if (asalMi == false) cout<<sayi<< endl;
    }


    return 0;

}
