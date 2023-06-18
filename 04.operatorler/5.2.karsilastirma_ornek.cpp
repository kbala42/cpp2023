 /*

    a)Aşağıdaki kod blokları çalıştırıldıktan sonra w değeri ne olur?

    intx = 5, y = 9, z = 7.4, w;
    w = (z>x)-(y<=l);
    cout« w;

    b)	Aşağıdaki kod blokları çalıştırıldıktan sonra w değeri ne olur?
    int x = 5, y = 9, z = 7.4, w;
    w = z>x-y<=ll;
    cout« w;

*/

#include <iostream>

using namespace std;

int main()
{
    int x = 5, y = 9, z = 7.4, w;
    //w = (z>x)-(y<=l1); // 1 - 1 =0
    w = z> x-y <= 11; // x-y=5-9=-4  7>-4=1  1<=11=1
    cout << w;


    return 0;

}

