/*
    Geriye Deger döndüren fonksiyonlar
    Çarpým tablosu

*/
#include<iostream>
using namespace std;

int carpma(int a, int b)
{
    return a*b;
}

int main()
{

    for(int i = 1; i<=10; i++)
    {
        for(int j = 1; j<=10; j++)
        {
            cout<< i << " x "<< j << " = "<<carpma(i, j)<<endl;
        }
    }

    return 0;
}
