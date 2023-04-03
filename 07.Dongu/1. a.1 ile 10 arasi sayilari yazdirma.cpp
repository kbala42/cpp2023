/*
    1 ile 10 arası sayıları ekrana yazdıran program

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;



int main()
{
    int sayac = 1;

    basla:// etiket tanımlıyoruz

    cout<<sayac<<endl;
    sayac++;

    if (sayac < 11) goto basla;

    return 0;
}
