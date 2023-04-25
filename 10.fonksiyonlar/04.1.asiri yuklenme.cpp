/*
    Geriye Deger döndüren fonksiyonlar
    En buyuk - en kucuk

*/
#include<iostream>
using namespace std;

int carpma(int a, int b)
{
    return a * b;
}

double  carpma(double a, double  b)
{
    return a * b;
}
int main()
{
    /*
    int a = 5;
    int b = 10;
    */
    double a = 5;
    double b = 10.5;

    cout<< a << " x "<< b << " = "<<carpma(a, b)<<endl;

    return 0;
}
