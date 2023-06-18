/*
    Katar Giriş

                                                                Kamil Bala

*/
#include<iostream>
using namespace std;


int main()
{
    string adSoyad[10];

    for(int i=0; i<6;i++)
    {
        cout <<i+1<< ". kisinin Ad ve Soyadi giriniz: "; cin>>adSoyad[i];
    }

    cout << "\n\n" ;

    for(int i=0; i<6;i++)
    {
        cout <<i+1<< ". kisinin Ad ve Soyadi: "<<adSoyad[i]<<endl;
    }
/*
    // getline() kullanimi

    for(int i=0; i<6;i++)
    {
        cout <<i+1<< ". kisinin Ad ve Soyadi giriniz: "; getline(cin,adSoyad[i]);
    }

    cout << "\n\n" ;

    for(int i=0; i<6;i++)
    {
        cout <<i+1<< ". kisinin Ad ve Soyadi: "<<adSoyad[i]<<endl;
    }
*/
    return 0;
}
