/*
    Araba sýnýfýna bir fonksiyon ekleme ve nesne tanýmlama
*/
#include<iostream>
#include<cstring>
using namespace std;

class Araba
{
    public:
        char marka[30];
        char model[30];
        int hiz;
        int hizArttir(int x);
};

Araba::hizArttir(int x)
{
    return hiz+x;
}
int main()
{
    //1. araba
    Araba araba1;
    strcpy(araba1.marka,"Fiat");
    strcpy(araba1.model,"Punto");
    araba1.hiz=100;

    // 2. araba
    Araba araba2;
    strcpy(araba2.marka,"Volskwagen");
    strcpy(araba2.model,"Polo");
    araba2.hiz=90;

    // Nesnelerin ozelliklerini yazdirin
    cout<<"1. araba"<<endl;
    cout<<araba1.marka<<", "<<araba1.model<< ", "<<"Araba hizi: "<<araba1.hizArttir(30) << " \n";

    cout<<"2. araba"<<endl;
    cout<<araba2.marka<<", "<<araba2.model<<", "<<"Araba hizi: "<<araba1.hizArttir(50) << " \n";


    return 0;
}
