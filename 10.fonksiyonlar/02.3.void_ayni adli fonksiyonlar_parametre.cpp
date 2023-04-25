/*
    Ayni ada sahip fonksiyonlarin kullanimi

*/
#include<iostream>
using namespace std;

void carpma(int a, int b)
{
    cout<<"Birinci fonksiyon calisti\n";
    cout<< a << " x "<< b << " = "<<a*b<<endl;
}
void carpma(int a, int b, int c)
{
    cout<<"Ikinci fonksiyon calisti\n";
    cout<< a << " x "<< b <<" x "<< c <<" = "<<a*b*c<<endl;
}
int main()
{
    carpma(3,4);
    carpma(2,8,5);

    return 0;
}
