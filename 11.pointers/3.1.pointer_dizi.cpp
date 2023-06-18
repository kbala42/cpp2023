// pointer dizi

#include <iostream>
using namespace std;


int main() {

    int sayilar[]={8,20,50};

    int *p;

    p = sayilar;

    cout<<sayilar<<endl;
    cout<<p<<endl;

    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<p[1]<<endl;
    return 0;
}
