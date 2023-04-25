/*
    Geriye Deger döndüren fonksiyonlar
    En buyuk - en kucuk

*/
#include<iostream>
using namespace std;

template<typename T>
T carpma(T a, T b)
{
    return a * b;
}


int main()
{

    int a = 5;
    int b = 10;
/*
    double a = 5;
    double b = 10.5;
*/
    cout<< a << " x "<< b << " = "<<carpma(a, b)<<endl;

    return 0;
}
