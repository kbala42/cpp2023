#include<iostream>
using namespace std;

int main()
{
    string adSoyad;
/*
    cout<<"adinizi ve soyadinizi giriniz:"; cin>> adSoyad;

    cout<<"adiniz ve soyadiniz:"<<adSoyad<<endl;

    cout<<"\n\n";
*/

    cout<<"adinizi ve soyadinizi giriniz:"; getline(cin, adSoyad);

    cout<<"adiniz ve soyadiniz:"<<adSoyad<<endl;

    return 0;
}
