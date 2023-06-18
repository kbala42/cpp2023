// Dizidekitek ve cift sayilari pointer yardimiyla bulma

#include <iostream>
using namespace std;


int main() {

    int sayi[10] ={5,1,8,4,12,19,22,55,68, 77};
    int *ptr;

    for(ptr = sayi; ptr<sayi+10; ptr++)
    {
        if(*ptr%2==0)
        {
            cout<<*ptr<<"\t";
        }
    }
    cout<<endl;
    for(ptr = sayi; ptr<sayi+10; ptr++)
    {
        if(*ptr%2!=0)
        {
            cout<<*ptr<<"\t";
        }
    }

    return 0;
}
