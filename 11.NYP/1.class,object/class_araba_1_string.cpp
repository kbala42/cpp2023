#include<iostream>
using namespace std;

class Araba
{
    public:
        string marka;
        string model;
        float fiyati;
        int hiz;
        int yili;

        void hizlanma();
        void yavaslama();
};
void Araba::hizlanma()
{
    hiz = hiz + 10;
    cout << "Araba hizlaniyor." << endl;
    }
void Araba::yavaslama()
{
    hiz = hiz - 10;
    cout << "Araba yavasliyor." << endl;
}
int main()
{
    Araba araba1;
    Araba araba2;

    araba1.marka="Fiat";
    araba1.model="Punto";
    araba1.yili=2012;

    araba2.marka="Volskwagen";
    araba2.model="Polo";
    araba2.yili=2020;

    cout<<"1. arac"<<endl;
    cout<<araba1.marka<<" "<<araba1.model<<" "<<araba1.yili<<endl;

    cout<<"2. arac"<<endl;
    cout<<araba2.marka<<" "<<araba2.model<<" "<<araba2.yili<<endl;

    return 0;
}
