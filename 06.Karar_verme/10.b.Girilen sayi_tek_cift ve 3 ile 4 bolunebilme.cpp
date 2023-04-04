/*
    Girilen bir sayýnýn çift mi? tek mi ? 3 ve 4 bolunebiliyor mu?

    Birliktelik
                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int sayi;

    cout<< "Bir sayi giriniz: ";
    cin>>sayi;

    if(sayi==0) cout<<"Girdiginiz sayi sifir"<<endl;

    else if (sayi%2 == 0)
    {
        if ((sayi%4 == 0) && (sayi%3 ==0)) cout<<"Girdiginiz sayi cifttir ve hem 3 hem de 4 bolunebilir"<<endl;

        else if(sayi%3 ==0) cout<<"Girdiginiz sayi cifttir ve 3 bolunebilir 4 bolunemez"<<endl;

        else if(sayi%4 ==0) cout<<"Girdiginiz sayi cifttir ve 4 bolunebilir 3 bolunemez"<<endl;

        else cout<<"Girdiginiz sayi cifttir ve 3 ve 4 bolunemez"<<endl;
    }
    else
    {
        if(sayi%4 == 0) cout<<"Girdiginiz sayi tektir ve 3 bolunebilir"<<endl;

        else cout<<"Girdiginiz sayi tektir ve 3 bolunemez"<<endl;
    }


    return 0;
}
