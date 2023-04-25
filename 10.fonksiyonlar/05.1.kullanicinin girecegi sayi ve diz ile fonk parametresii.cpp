/*
  Kullanicinin girecegi sayilarin ortalamasi
*/
#include<iostream>

using namespace std;

int topla(int sayilar[], int adet)
{
    int toplam=0;

    for(int i=0; i<adet; i++)
    {
         toplam += sayilar[i];
    }

    return toplam;
}
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
    }

    cout<<"ortalama: "<<(float)topla(sayilar,adet)/adet<<endl;

    return 0;
}


