/*
    AAhmet bilgisayara rastgele 2 sayı ürettirip, üretilen sayıdaki büyük olanı
    ekrana yazdırmak istiyor. Ahmet'in nasıl bir kod yazması gerekmektedir?

    Alinti:
    Deneyap Ortaokul Yazýlým Teknolojileri
    for cozumu

                                                        Kamil Bala

   https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
*/
#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int sayi1, sayi2;
    srand(time(0));

    sayi1 = rand() ;
    sayi2 = rand();

    if(sayi1 > sayi2)
    {
        cout<<sayi1<<" daha buyuk"<<endl;
    }
    else{
        cout<<sayi2<<" daha buyuk"<<endl;
    }

    return 0;
}
