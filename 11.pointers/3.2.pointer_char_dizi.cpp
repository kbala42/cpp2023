// pointer dizi

#include <iostream>
using namespace std;


int main() {

    char mesaj[]="Merhaba";

    char *p;

    p = mesaj;

    cout<<mesaj<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;
    cout<<*(p+5)<<endl;
    cout<<*(p+6)<<endl;
    return 0;
}
