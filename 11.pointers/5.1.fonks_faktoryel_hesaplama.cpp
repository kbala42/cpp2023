// Gosterici ile faktoryel hesaplama


#include <iostream>
using namespace std;

int faktoryelHesapla(int *sayi)
{
    int sonuc=1;
    for(int i= *sayi; i>=1;i--)
    {
        sonuc *= i;
    }
    return sonuc;
}

int main() {

    int sayi, faktoryel;
    cout<<"Faktoryeli hesaplanacak sayiyi giriniz: "; cin>>sayi;

    faktoryel=faktoryelHesapla(&sayi);

    cout<<sayi<<" nin faktoryeli: "<<faktoryel<<endl;

    return 0;
}
