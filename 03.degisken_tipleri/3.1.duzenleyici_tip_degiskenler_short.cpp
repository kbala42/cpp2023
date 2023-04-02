 /*
    short int Veri Tipi

    Short veri tipi, int veri tipinin yarısı boyutunda, yani 2 bayttır.
    -32,768 ile 32,767 arasında değer alabilir.
    Nispeten küçük değerleriniz olduğunda, bu tür daha kullanışlıdır.
    Bellek açısından baktığımız zaman int türünün sadece yarısını kapladığı için
    iki kat daha verimli olmaktadır.

                                            Kamil Bala
    Alıntı:
    Deneyap Yazılım Teknolojileri
*/

#include <iostream>

using namespace std;

int main()
{
    short int sayi = 5;
    // short sayi = 5;   // tanım olarak kullanılabilir. Aynı anlamda kullanılır
    cout << sayi<< endl;

/*
    cout<<"---short int veri tipi---"<<endl;

    // short int veri tipi (2 byte)
    cout << "short int boyutu: " << sizeof(short int) << endl;

    // min değer:-32,768 max değer: 32,767

    short int int_min = -32768;
    short int int_max = 32767;

    short int int_neg1 = -32769;
    short int int_poz1 = 32768;

    short int int_neg2 = -32770;
    short int int_poz2 = 32769;


    cout << "short int_min: " << int_min << endl;
    cout << "short int_max: " << int_max << endl;
    cout << endl;

    cout << "short int_neg1: " << int_neg1 << endl;
    cout << "short int_poz1: " << int_poz1 << endl;
    cout << endl;

    cout << "short int_neg2: " << int_neg2 << endl;
    cout << "short int_poz2: " << int_poz2 << endl;
    cout << endl;

*/
    return 0;

}

