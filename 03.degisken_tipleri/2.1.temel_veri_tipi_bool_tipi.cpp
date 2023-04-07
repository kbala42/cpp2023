 /*
    Bool veri tipi en basit veri tipidir ve bir bayt uzunluğundadır.
    Doğru (1) ve yanlış (0) olmak üzere iki değerden birini saklayabilir.
    Programınızda yalnızca iki olasılığınız olduğunda bool türünü kullanabilirsiniz.
    Doğru (true-1) veya yanlış (false-0) değerlerini alabilen veri tipidir

    Alıntı:
    Deneyap Yazılım Teknolojileri


                                            Kamil Bala

*/

#include <iostream>

using namespace std;

int main()
{
    cout<<"---boolean veri tipi---"<<endl;

    // boolean veri tipi (1	byte)
    cout << "Bool boyutu: " << sizeof(bool) << endl;

    // min değer:O(false)	max değer: 1 (true)

    bool a;
    bool b = false;
    bool c = true;
    bool d = 0;
    bool e = 1;
    bool f = 1000;// 1 den buyuk her sayi 1 (true) degerini verir
    bool g = 0.001;// 0 dan buyuk her sayi 1 (true) degerini verir
    bool h = "merhaba";// o (false) dan farklı tanımlamalar 1 (true) degerini verir

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "f: " << f << endl;
    cout << "g: " << g << endl;
    cout << "h: " << h << endl;


    return 0;

}

