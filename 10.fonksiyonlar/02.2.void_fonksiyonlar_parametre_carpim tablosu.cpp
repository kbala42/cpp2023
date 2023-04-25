/*
    Geri Dönüþsüz Fonksiyonlarda Parametre Kullanma
    Çarpým tablosu

*/
#include<iostream>
using namespace std;

void carpma(int a, int b)
{
    cout<< a << " x "<< b << " = "<<a*b<<endl;
}

int main()
{

    for(int i = 1; i<=10; i++)
    {
        for(int j = 1; j<=10; j++)
        {
            carpma(i, j);
        }
    }

    return 0;
}
