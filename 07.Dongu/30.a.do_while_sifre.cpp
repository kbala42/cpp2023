/*
  Kullanýcýnýn girecegi sayiya kadar 7 nin katlari
*/
#include<iostream>

using namespace std;

int main()
{
    string sifre="12345";
    string giris;


    do
    {
        cout<<"Sifrenizi giriniz:";cin>>giris;

    }while(sifre != giris);

    cout<<"Hosgeldiniz..."<<endl;


    return 0;
}


