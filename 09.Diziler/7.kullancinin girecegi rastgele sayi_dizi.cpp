/*
    Kullancinin istedigi kadar sayi uretip, sakliyacagiz ve okuyacagiz
    Hem 5'e hem de 3 bolunenler
    5'e bolunmeyen 3 bolunenler
    5'e bolunen 3 bolunmeyenler
    yazdiracagiz


                                                                Kamil Bala

*/


#include<iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int sayilar[100];
    int elemanSayisi;

    cout<<"Kac eleman ureteceksiniz:"; cin>>elemanSayisi;

    int rasgeleSayi;
    //srand(time(0));
    srand(time(0));

    for(int i=0; i<elemanSayisi; i++)
    {
        rasgeleSayi = rand() % 100+1;
        cout<<rasgeleSayi<<endl;
        sayilar[i]=rasgeleSayi;
    }

    // diziyi yazdiriyoruz
    for(int i=0;i<elemanSayisi;i++)
    {
        cout<<"sayilar["<<i<<"]:"<<sayilar[i]<<endl;
    }

    cout<<"hem Bese hemde Uce tam bolunenler"<<endl;

    for(int i=0;i<elemanSayisi;i++)
    {
        if((sayilar[i]%5==0) && (sayilar[i]%3==0)) cout<<sayilar[i]<<endl;
    }

    cout<<"Bese bolunmeyen  Uce bolunenler"<<endl;

    for(int i=0;i<elemanSayisi;i++)
    {
        if((sayilar[i]%5 !=0 ) && (sayilar[i]%3==0)) cout<<sayilar[i]<<endl;
    }

    cout<<"Bese bolunen  Uce bolunmeyen"<<endl;

    for(int i=0;i<elemanSayisi;i++)
    {
        if((sayilar[i]%5 ==0 ) && (sayilar[i]%3 !=0)) cout<<sayilar[i]<<endl;
    }
    return 0;
}
