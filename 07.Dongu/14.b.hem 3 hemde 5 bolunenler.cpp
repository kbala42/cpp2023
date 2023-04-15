/*
    100 ile 200 arasinda hem 3’e hemde 5 ile bolunen sayilari ve adetlerini
    yazdiran program
                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int adet;

    for(int sayac=100;sayac<=200;sayac++)
    {
        if(sayac%3 == 0 && sayac %5 == 0)
        {
            cout<<sayac<<endl;
            adet++;
        }

    }

    cout<<"100 ile 200 arasinda hem 3 e hemde 5 ile bolunenlerin sayisi:"<<adet<<endl;


    return 0;

}
