/*
    istene sayi kadar asal sayi bulan program.
    .
                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

#include<math.h>

int main()
{
    bool asalMi=false;
    int adet, asalSayac=2, asalSayiAdet=0;

    cout<<"kac adet asal sayi bulalim:"; cin>>adet;

    while(adet>asalSayiAdet)
    {
        for(int sayac = 2; sayac<=asalSayac/2; sayac++)
        {
            if(asalSayac % sayac == 0) // sayi, sayac'in o anki iceregine tam bolunuyorsa asal degildir
            {
                asalMi = true;
                break;
            }
        }

        if (asalMi == false)
        {
            cout<<asalSayac<< endl;
            asalSayiAdet++;
        }
        asalMi=false;
        asalSayac++;
    }


    return 0;

}
