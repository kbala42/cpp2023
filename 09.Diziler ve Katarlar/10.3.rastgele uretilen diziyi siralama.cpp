/*
    Rastgele 1-10 arasý üretilen sayý dizisini sýralama


                                                                Kamil Bala

*/


#include<iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int sayilar[10];
    int rasgeleSayi;

    srand(time(0));

    for(int i=0; i<10; i++)
    {
        rasgeleSayi = rand() % 10+1;
        sayilar[i]=rasgeleSayi;
    }

    // diziyi yazdiriyoruz
    for(int i=0;i<10;i++)
    {
        cout<<sayilar[i]<<"\t";
    }

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(sayilar[j]>sayilar[j+1])
            {
                int temp = sayilar[j];
                sayilar[j] = sayilar[j+1];
                sayilar[j+1] = temp;
            }
        }
    }

    cout<<endl;

    for(int i=0;i<10;i++)
    {
        cout<<sayilar[i]<<"\t";
    }
    return 0;
}
