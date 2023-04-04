/*
    0-100 arasında rastgele üretilen 10 tam sayı yazdırma

                                                        Kamil Bala

    0 ile N-1 aralığında bir değer elde etmek için Rand()kullanımı

     https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
*/
#include<iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));

    for(int sayac=0; sayac<10; sayac++)
        cout << rand() % 100 <<endl;

    return 0;
}
