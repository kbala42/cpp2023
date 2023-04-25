/*

Dort islemi ayri ayri fonksiyonlar halinde yapan hesap makinesi

*/
#include<iostream>
using namespace std;

int carpma(int a, int b)
{
     return a*b ;
}
int toplama(int a, int b)
{
     return a+b;
}
int cikarma(int a, int b)
{
    return a-b;
}
int bolme(int a, int b)
{
    return a/b;
}

int main()
{
    cout<<carpma(5,6)<<endl;
    cout<<toplama(5,7)<<endl;
    cout<<cikarma(10,5)<<endl;
    cout<<bolme(20,10)<<endl;

    return 0;
}
