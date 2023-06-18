/*
    4 basamakli sayilardan tekrarsiz adetleri.

                                                                Kamil Bala

*/

#include<iostream>
#include<cmath>
using namespace std;



int main()
{
    int sayac, birler, onlar, yuzler, binler;


    for(int i=1000;i<=9999;i++)
    {
        birler = i%10;
        onlar = (i/10) % 10;
        yuzler = (i/100) % 10;
        binler = i/1000;
        if(birler != onlar && birler != yuzler && birler != binler &&
           onlar != yuzler && onlar != binler &&
           yuzler != binler )
        {
            sayac++;
        }
    }

    cout<<"rakamlari birbirinden farkli "<<sayac<< " adet sayi var"<<endl;



    return 0;

}
