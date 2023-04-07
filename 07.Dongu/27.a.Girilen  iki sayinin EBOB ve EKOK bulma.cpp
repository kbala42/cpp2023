/*
    Girilen İki sayının EBOK ve EKOK bulan program

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int sayiBir,sayiIki,eBOB, eKOK;

    cout<<"Birinci sayiyi giriniz:"; cin>>sayiBir;

    cout<<"Ikinci sayiyi giriniz:"; cin>>sayiIki;


    for(int sayac=1; sayac<=sayiBir && sayac<=sayiIki; sayac++)
    {
        if (sayiBir%sayac == 0 && sayiIki % sayac == 0  )
            eBOB = sayac;
    }

    eKOK = sayiBir * sayiIki / eBOB;

    cout<<"Sayilarin EBOB\'u:"<< eBOB <<endl;

    cout<<"Sayilarin EKOK\'u:"<< eKOK <<endl;

    return 0;

}
