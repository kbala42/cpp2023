/*
  Kullanicinin girecegi sayilarin ortalamasi
*/
#include<iostream>

using namespace std;

int main()
{
    int adet, toplam = 0;
    cout<<"Kaç eleman gireceksiniz: "; cin>> adet;

    int sayilar[adet];

    for(int i=0; i<adet; i++)
    {
        cout<<i+1<<". sayiyi giriniz: ";cin>>sayilar[i];
    }

    for(int i=0; i<adet; i++)
    {
        cout<<"i["<<i<<"]:"<<sayilar[i]<<endl;
        toplam += sayilar[i];
    }

    cout<<"ortalama: "<<(float)toplam/adet<<endl;

    return 0;
}


