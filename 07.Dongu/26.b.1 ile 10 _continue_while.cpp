/*
    1 ile 10 arası sayıları  ekrana yazdırirken 5 sayisini atlamak istiyoruz.
    Bu programi yaziniz

    While Döngüsü


                                                        Kamil Bala


*/
#include<iostream>
using namespace std;

int sayac = 1;

int main()
{
    int sayac=1;

    while( sayac<11)
    {
        if(sayac == 5)
        {
            sayac++;
            continue;
        }
        cout<<sayac<<endl;
        sayac++;
    }

    return 0;
}
