#include<iostream>
using namespace std;


int main()
{
    int dizi[5] ={1,2,3,4,5};
    for(int i=0; i<5; i++) cout<<dizi[i]<<" ";

    cout<<endl;

    int *ptr=new int(5);
    // rastgele degerler gozukur
    for(int i=0; i<5; i++) cout<<ptr[i]<<" ";

    cout<<endl;

    ptr[0]=20;
    ptr[1]=50;
    ptr[2]=100;
    ptr[3]=150;
    ptr[4]=200;
    for(int i=0; i<5; i++) cout<<ptr[i]<<" ";

    cout<<endl;

    delete ptr; // işaretciyi bellekten siliyoruz
    // rastgele degerler gozukur
    for(int i=0; i<5; i++) cout<<ptr[i]<<" ";

    cout<<endl;

    // pointer null yapiyoruz
    ptr=nullptr;
    for(int i=0; i<5; i++) cout<<ptr[i]<<" ";

    return 0;
}
