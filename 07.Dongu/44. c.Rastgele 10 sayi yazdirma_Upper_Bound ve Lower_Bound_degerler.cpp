/*
    Belirlenen aralıkta rastgele 10 sayı yazdırma

                                                        Kamil Bala

    Üst (Upper_Bound)'dan Alt (Lower_Bound) degerler arasinda

     https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
*/
#include<iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int lb = 20, ub = 100;

    srand(time(0));

    for(int sayac=0; sayac<10; sayac++)
        cout << (rand() % (ub - lb + 1)) + lb <<endl;

    return 0;
}
