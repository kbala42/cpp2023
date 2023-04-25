/*
  Kullanicinin girecegi sayilanın asal olup olmadığını
  fonksiyon ile bulma

                                Kamil Bala
*/
#include<iostream>

using namespace std;

bool asalMi(int sayiTest)
{
    bool sonuc=true;

    for(int i = 2; i<sayiTest; i++)
    {
        if(sayiTest%i == 0)
        {
            sonuc = false;
            break;
        }
    }
    cout<<sonuc<<endl;
    return sonuc;
}
int main()
{
    int sayi;

    cout<<"Asal olup olmadigini test edeceginiz sayiyi giriniz : "; cin>> sayi;

    if(asalMi(sayi))cout<<sayi<<" sayisi asal bir sayidir.";
    else cout<<sayi<<" sayisi asal bir sayi degildir.";

    return 0;
}


