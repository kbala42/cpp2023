// Programin cikisi nedir?

#include <iostream>
using namespace std;

int main() {

    int x = 9;

    int *ptr = &x;

    cout << "x = " << x << endl;

    cout << "*ptr = " << *ptr<< endl; //pointer icerigini yazdiriyoruz

    *ptr = 3;

    cout << "x in yeni degeri " << x << endl;

    return 0;
}
