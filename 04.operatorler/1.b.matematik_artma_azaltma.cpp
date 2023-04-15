 /*
    Matematik Operatorleri

    Artma  ve azaltma operatörleri


                                            Kamil Bala

*/

#include <iostream>

using namespace std;

int main()
{


    int a = 10, b;

    b = a++;

    cout << "Bir arttir a: " << a << endl;

    cout << "Bir arttir b: " << b << endl;

    int x = 10, y;

    y = ++x;

    cout << "Bir arttir x: " << x << endl;

    cout << "Bir arttir y: " << y << endl;


/*
    int k = 5;
    cout << "Bir arttir: " << k++ << endl;
    cout << "Bir arttir: " << k << endl;

    int n = 10;
    cout << "Bir arttir: " << ++n << endl;
    cout << "Bir arttir: " << n << endl;
*/

/*



    int a = 10, b;

    b = a--;

    cout << "Bir azalt a: " << a << endl;

    cout << "Bir azalt b: " << b << endl;

    int x = 10, y;

    y = --x;

    cout << "Bir azalt x: " << x << endl;

    cout << "Bir azalt y: " << y << endl;


   */

   /*
    int a = 10, b = 5, c;

    c = --a + b++; // c = 9 + 5 = 14

    cout << "a: " << a << endl; // --a = 9

    cout << "b: " << b << endl; // b++ = 6

    cout << "c: " << c << endl; // c = 9 + 5 = 14

    int a = 10, b = 5, c;
*/
/*

    int a = 10, b = 5, c;

    c = --a + ++b; // c = 9 + 6 = 15

    cout << "a: " << a << endl; // --a = 9

    cout << "b: " << b << endl; // ++b  = 6

    cout << "c: " << c << endl; // c = 9 + 6 = 15
*/
    return 0;

}

