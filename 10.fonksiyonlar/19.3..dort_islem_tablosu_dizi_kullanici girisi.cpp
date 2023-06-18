/*
  f(x,y) = x*2+y

    ��retmene ka� giri� girece�ini sorsun, belirledi�i sayida rakami ��retmen girsin.
    Girilen rakamlar� dizi de sakl�yoruz. Bu rakamlar� kullanarak toplama, ��karma, �arpma
    ve b�lme sorular� haz�rl�yoruz.
*/


#include<iostream>
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
    int sayilar[50];// Girilen sayilari saklamak icin dizi bildiriyoruz.

    int adet;

    int a, b; // gonderilecek parametre kopyasi

    cout<<"Kac giris yapacaksiniz: ";cin>>adet;

    for(int i=0; i<adet; i++)
    {
        cout<<i+1<<". sayiyi giriniz: ";cin>>sayilar[i];
    }

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
