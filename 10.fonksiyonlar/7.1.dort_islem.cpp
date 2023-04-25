/*

Dort islemi ayri ayri fonksiyonlar halinde yapan hesap makinesi

*/
#include<iostream>
using namespace std;

void carpma(int a, int b)
{
    cout<<a<<" x "<<b<<" = "<< a*b <<endl;

}
void toplama(int a, int b)
{
    cout<<a<<" + "<<b<<" = "<< a+b <<endl;
}
void cikarma(int a, int b)
{
    cout<<a<<" - "<<b<<" = "<< a-b <<endl;
}
void bolme(int a, int b)
{
    cout<<a<<" / "<<b<<" = "<< a/b <<endl;
}
int main()
{
    carpma(5,6);
    toplama(5,7);
    cikarma(10,5);
    bolme(20,10);

    return 0;
}
