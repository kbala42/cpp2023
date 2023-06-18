/*
  try catch hata yakalam blogu


*/
#include<iostream>

using namespace std;

int main()
{
    int bolen, bolunen, sonuc;

    cout<<"Bolunen sayiyi giriniz: ";cin>>bolunen;

    cout<<"Bolen sayiyi giriniz: ";cin>>bolen;

    try
    {
        if(bolen == 0)
            throw 99;
        sonuc = bolunen / bolen;
        cout<<"Sonuc: "<<sonuc;
    }
    catch(int hataKodu){
        cout<<"Bolen sayi 0 olmamali.."<<endl;
    }

    return 0;
}


