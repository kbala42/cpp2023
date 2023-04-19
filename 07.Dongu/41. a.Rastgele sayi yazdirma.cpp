/*
    Rastgele tam sayı yazdırma

                                                        Kamil Bala

*/
#include<iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int rasgeleSayi;
    //srand(time(0));
    srand(time(NULL));

    rasgeleSayi = rand();

    cout<<rasgeleSayi<<endl;

    return 0;
}
