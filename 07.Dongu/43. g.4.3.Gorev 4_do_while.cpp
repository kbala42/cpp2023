/*
    Defne öğretmen aldığı 10 tane kitabı sınıfındaki öğrencilere çekiliş yoluyla dağıtmak istemektedir.
    Sınıftaki öğrencilerin okul numaraları 50 ile 100 arasındadır (100 hariç). Defne öğretmen bunun için
    50 ile 100 arasında 10 tane rastgele bir sayı üreten program yazarak kitapları okul numarası rastgele
    çıkan öğrencilere verecektir. Bunun için nasıl bir kod yazmalıdır?


    for


    Alinti:
    Deneyap Ortaokul Yazýlým Teknolojileri
    do while cozumu

                                                        Kamil Bala

   https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
*/
#include<iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int sayac=0;

    srand(time(0));

    do
    {
        cout << 50 + rand() % 50 <<endl;
        sayac++;
    }while( sayac<10);

    return 0;
}
