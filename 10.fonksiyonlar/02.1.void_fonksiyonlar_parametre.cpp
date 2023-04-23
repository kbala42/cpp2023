/*
    Geri Dönüþsüz Fonksiyonlarda Parametre Kullanma


*/
#include<iostream>
using namespace std;

void carpma(int a, int b)
{
    cout<< a << "x"<< b << "="<<a*b<<endl;
}

int main()
{
    int x, y;

    cout<<"x: "; cin>>x;

    cout<<"y: "; cin>>y;

    carpma(x, y);

    return 0;
}
