// fonksiyon hesaplama

#include <iostream>
using namespace std;

int kareAl(int _x)
{
    return _x * _x;
}
int main() {

    for(int i=1; i<=10; i++) cout<<kareAl(i)<<"\t";

    return 0;
}
