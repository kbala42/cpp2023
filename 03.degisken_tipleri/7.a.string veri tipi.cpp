 /*
    String Veri Tipi

                                            Kamil Bala
*/

#include <iostream>
using namespace std;


int main()
{
/*
    string mesaj = "Hello World";

    cout << "Mesajiniz: " << mesaj << endl;

 */
    // iki string'in toplami
    string ad = "Hasan";
    string soyad = "Demir";

/*
    cout << "Ad ve Soyadiniz: " <<ad+soyad << endl;

    cout << "Ad ve Soyadiniz: " <<ad+" "+soyad << endl;
*/

/*
    string adSoyad = ad+" "+soyad;

    cout << "Ad ve Soyadiniz: " <<adSoyad << endl;
*/

    // append() fonksiyonu. string'ler gerçek bir nesne oldukları için ekleme yapılabilir
    string adSoyad = ad.append(soyad);
    cout << "Ad ve Soyadiniz: " <<adSoyad << endl;

    return 0;
}
