#include<iostream>
using namespace std;

int main()
{

    int yas[5];

    for(int i=0; i<5; i++) // i: indis
    {
        cout <<i+1<< ". arkadasin yasini girin: "; cin>>yas[i];
    }

    for(int i=0; i<5; i++) // i: indis
    {
        cout <<i+1<< ". arkadasimin yasi: " << yas[i] << endl;
    }


    return 0;
}

