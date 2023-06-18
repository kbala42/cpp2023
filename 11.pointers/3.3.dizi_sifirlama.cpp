// pointer dizi

#include <iostream>
using namespace std;


int main() {

    int t[100];
    int *p;
    /*
    for(int i=0;i<100;i++)
        t[i]=0;

    for(int i=0;i<100;i++)
        cout<<t[i]<<endl;
    */

    for(p=t;p<t+100;p++)
        *p = 0;

    for(p=t;p<t+100;p++)
        cout<<*p<<endl;

    return 0;
}
