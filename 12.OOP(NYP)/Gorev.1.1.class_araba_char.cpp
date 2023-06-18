/*
    Basit bir Araba sýnýfý oluþturarak, birden fazla nesne tanýmlamasý yapmak
*/
#include<iostream>
#include<cstring>
using namespace std;

class Araba
{
    public:
        char marka[30];
        char model[30];
        float fiyati;
        int yili;
};

int main()
{
    //1. araba
    Araba araba1;
    strcpy(araba1.marka,"Fiat");
    strcpy(araba1.model,"Punto");
    araba1.yili=2012;
    araba1.fiyati=500000;

    // 2. araba
    Araba araba2;
    strcpy(araba2.marka,"Volskwagen");
    strcpy(araba2.model,"Polo");
    araba2.yili=2020;
    araba1.fiyati=400000;

    // Nesnelerin ozelliklerini yazdirin
    cout<<"1. araba"<<endl;
    cout<<araba1.marka<<", "<<araba1.model<<", "<<araba1.yili<< ", " << araba1.fiyati << " \n";

    cout<<"2. araba"<<endl;
    cout<<araba2.marka<<", "<<araba2.model<<", "<<araba2.yili<< ", " << araba2.fiyati << " \n";

    // 3. araba
    Araba araba3;
    strcpy(araba3.marka, "Suzuki");
    strcpy(araba3.model, "Vitara");
    araba3.yili = 2016;
    araba3.fiyati = 225000;

    // 4. Araba
    Araba araba4;
    strcpy(araba4.marka, "Volkswagen");
    strcpy(araba4.model, "T-Roc");
    araba4.yili = 2020;
    araba4.fiyati = 360000;

    // Nesnelerin ozelliklerini yazdirin
    cout << "3. araba: " << araba3.marka << ", " << araba3.model << ", " << araba3.yili
    << ", " << araba3.fiyati << " \n";
    cout << "4. araba: " << araba4.marka << ", " << araba4.model << ", " << araba4.yili
    << ", " << araba4.fiyati << " \n";

    return 0;
}
