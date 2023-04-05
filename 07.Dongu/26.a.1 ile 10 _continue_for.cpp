/*
    1 ile 10 arası sayıları  ekrana yazdırirken 5 sayisini atlamak istiyoruz.
    Bu programi yaziniz

                                                        Kamil Bala


*/
#include<iostream>
using namespace std;

int sayac = 1;

int main()
{
    for(int sayac=1; sayac<11;sayac++)
    {
        if(sayac == 5) continue;
        cout<<sayac<<endl;
    }

    return 0;
}
