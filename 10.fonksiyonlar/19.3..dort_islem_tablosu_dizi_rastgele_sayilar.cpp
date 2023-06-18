/*
2.Öğretmene yerine rastgele 1-10 arasında istenen sayıda  üretilen rakamları
dizi de saklıyoruz.
*/


#include<iostream>
#include <cstdlib>
#include <time.h>

using namespace std;



int carpim(int i, int j)
{
    return i*j;
}
int toplam(int i, int j)
{
    return i+j;
}
int cikarma(int i, int j)
{
    return i-j;
}
double bolme(int i, int j)
{
    return (double) i/j;
}


int main()
{
    /*
    1 x 5 = 5

    */
    srand(time(0));

    int sayilar[50];// Girilen sayilari saklamak icin dizi bildiriyoruz.

    int adet;

    cout<<"Kac sayi uretilsin: ";cin>>adet;

    for(int sayac=0; sayac<adet; sayac++)
    {
        sayilar[sayac]=1 + rand() % 10;
        cout<<sayilar[sayac]<<endl;
    }




    int a, b; // gonderilecek parametre kopyasi


    for(int i=0; i<adet;i++)
    {
        for(int j=0; j<adet;j++)
        {

            a=sayilar[i];
            b=sayilar[j];

            cout<<a<<"+"<<b<<"="<<toplam(a,b)<<endl;

            cout<<a<<"-"<<b<<"="<<cikarma(a,b)<<endl;

            cout<<a<<"x"<<b<<"="<<carpim(a,b)<<endl;

            cout<<a<<"/"<<b<<"="<<bolme(a,b)<<endl;

            cout<<"-----------------------"<<endl;
        }
    }


    return 0;
}
