/*
  Kullanýcýnýn girecegi sayiya kadar 7 nin katlari
*/
#include<iostream>

using namespace std;

int main()
{
    int sayac = 1, sayi;
    cout<<"Kaca kadar 7 nin katlarini bulmak istersiniz:";cin>>sayi;


    while(sayac<=sayi)
    {
        if(sayac%7 == 0) // Girilen sayi 7 ye bolunuyorsa
        {
            cout<<sayac<<"\t";
        }
        sayac++;
    }


    return 0;
}


