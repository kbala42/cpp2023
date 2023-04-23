/*
    Geriye Deger döndüren fonksiyonlar
    En buyuk - en kucuk

*/
#include<iostream>
using namespace std;

int enb_enk(int a, int b, int c)
{
    int enb = a;
    int enk = a;

    if (enb<b) enb = b;
    if (enb<c) enb = c;

    if (enk>b) enk = b;
    if (enk>c) enk = c;

    return enb-enk;
}

int main()
{
    cout << enb_enk(10,50,5)<<endl;

    return 0;
}
