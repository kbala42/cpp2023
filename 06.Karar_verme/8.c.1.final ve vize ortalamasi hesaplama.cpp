/*
    Girilen vize ve final notuna göre "geçti" yada "kaldý" mesajý yazdýrma

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    float vizeNotu, finalNotu, ortalama;

    cout << "Vize notunu giriniz:"; cin >> vizeNotu;

    cout << "Final notunu giriniz:"; cin >> finalNotu;


    if(vizeNotu>100 || finalNotu >100 || vizeNotu<0 || finalNotu <0 )
    {
        cout<<"Hatalý not girdiniz! "<< endl;
    }
    else
    {
        ortalama = vizeNotu * 0.3 + finalNotu * 0.7;

        if((ortalama >=  60) && (finalNotu >=  60) )
        {
            cout<<"Gectiniz. Ortalamaniz "<<ortalama<<endl;
        }
        else
           {
            cout<<"Kaldiniz. Ortalamaniz "<<ortalama<<endl;
        }
    }


    return 0;


    return 0;
}
