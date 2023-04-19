/*
    Rastgele tam sayı yazdırma

    1 ile 100 arasi sayi üretmek

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
    // 1 ile 100 arasi sayi uretmek icin 100'e gore modunu aliyoruz
    rasgeleSayi = rand() % 100+1; // 1 ile 100 arasi sayi uretmek

    cout<<rasgeleSayi<<endl;

    return 0;
}
