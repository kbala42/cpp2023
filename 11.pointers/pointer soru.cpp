// Programin cikisi nedir?

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* p1 = &a;
    int** p2 = &p1;


    cout << "a = " << a << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "**p2 = " << **p2 << endl;


    **p2 = 10;
    cout << "a = " << a << endl;

    return 0;
}
