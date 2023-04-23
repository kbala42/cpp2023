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
    int takas;

    for(int j=0; j<10; j++)
    {
        for(int i=0; i<9; i++)
        {
            if (sayilar[i]>sayilar[i+1])
            {
                takas = sayilar[i];
                sayilar[i] = sayilar[i+1];
                sayilar[i+1] = takas;
            }
        }
    }

    for(int i=0; i<9; i++) cout<< sayilar[i]<<endl;


    return 0;
}
