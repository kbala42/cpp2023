/*
    Dizilerde Siralama

    bubble sort

                                                                Kamil Bala

*/
#include<iostream>
using namespace std;


int main()
{
    int sayilar[ ] = {15, 14, 9, 17, 12, 2, 16, 20, 1, 8};
    int takas, enk;

    for(int j=0; j<10; j++)
    {
        enk = sayilar[j];
        for(int i = j + 1; i<10; i++)
        {
            if (enk > sayilar[i])
            {
                enk = sayilar[i];
                takas = sayilar[j];
                sayilar[j] = sayilar[i];
                sayilar[i] = takas;
            }
        }
    }

    for(int i=0; i<9; i++) cout<< sayilar[i]<<endl;


    return 0;
}
