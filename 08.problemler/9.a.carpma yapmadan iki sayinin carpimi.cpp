/*
    Carpma yapmadan iki sayinin carpimi.

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int sayiBir,sayiIki,carpim=0;

    cout<<"Birinci sayiyi giriniz: "; cin>>sayiBir;

    cout<<"Ikinci sayiyi giriniz: "; cin>>sayiIki;

    for(int i=1; i<=sayiIki; i++) carpim += sayiBir;

    cout<<sayiBir<<" x "<<sayiIki<<" = "<<carpim<<endl;

    return 0;

}
