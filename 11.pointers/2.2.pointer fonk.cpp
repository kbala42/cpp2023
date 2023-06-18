// fonksiyon hesaplama

#include <iostream>
using namespace std;

void arttir(int *a)
{
    (*a)++;
}
int main() {

    int a=5;

    arttir(&a);

    cout<<a<<"\t";


    return 0;
}
