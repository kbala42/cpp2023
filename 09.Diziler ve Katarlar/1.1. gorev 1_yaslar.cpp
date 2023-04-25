/*
    Arkadaşlarımızın yaşlarını bir dizi de tanımlıyoruz ve içeriklerini sırayla okuyoruz

                                                                Kamil Bala

*/
#include<iostream>
using namespace std;


int main()
{
    int yaslar[5] = {15, 14, 17, 12, 16};

    for(int sayac=0; sayac<5; sayac++){
        cout << sayac+1 <<". arkadasimin yasi: " << yaslar[sayac] << endl;
    }
    return 0;
}
