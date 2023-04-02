 /*
    long int Veri Tipi

    Tam sayı veri tipleri arasındaki diğer veri tipimiz de long veri tipidir.
    Int veri tipi gibi 4 bayt uzunluktadır.
    Dolayısıyla -2,147,483,648 ile 2,147,483,647 arasında değer alabilir.


                                            Kamil Bala
    Alıntı:
    Deneyap Yazılım Teknolojileri
*/

#include <iostream>

using namespace std;

int main()
{

    long int sayi = 597;
    //long sayi = 597;    // Aynı sonucu verir.
    cout << sayi;

/*
    cout<<"---long int veri tipi---"<<endl;

    // int veri tipi (4 byte)
    cout << "long int boyutu: " << sizeof(long int) << endl;
    cout << endl;

    // min değer:-9223372036854775808 max değer: 9223372036854775807

    long int long_int_a = -5456943859L;
    long int long_int_b =  8888888888L;

    cout << "long int long_int_a: " << long_int_a << endl;
    cout << "long int long_int_b: " << long_int_b << endl;
*/


    return 0;

}

