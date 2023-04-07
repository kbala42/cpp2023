/*
    Girilen bir sayýnýn negatif mi? pozitif mi ? oldugunu bulan program

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int sayi;

    cout<< "Bir sayi giriniz: ";
    cin>>sayi;

    if (sayi < 0)
    {
        cout << sayi << " sayisinin mutlak degeri:" << sayi * (-1)<<endl;
    }else
    {
        cout << sayi << " sayisinin mutlak degeri:" << sayi <<endl;
    }


    return 0;
}
