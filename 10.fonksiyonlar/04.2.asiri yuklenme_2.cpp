/*
    Bir fonksiyonu birden farklı şekilde kullanabilmek için fonksiyonları farklı şekilde
    tanımlayabiliriz. Örneğin: bir fonksiyon ile dikdörtgen/kare çevresini hesaplayalım. Eğer
    kullanıcı fonksiyona iki değişken gönderir ise bu bir dikdörtgen, tek değişken gönderirse kare
    olarak ele alır ve işlemleri buna göre yaparız.

                                Kamil Bala

*/
#include<iostream>
using namespace std;

int cevre_hesapla(int a)
{
    int cevre = a*4;
    return cevre;
}
int cevre_hesapla(int a, int b)
{
    int cevre = 2*a + 2*b;
    return cevre;
}
int main()
{
    int cevre1 = cevre_hesapla(5);
    int cevre2 = cevre_hesapla(5,4);

    cout << cevre1 <<endl;
    cout << cevre2 <<endl;
}
