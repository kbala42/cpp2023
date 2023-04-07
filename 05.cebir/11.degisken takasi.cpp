/*
    İki Degişken Arasında Takas İşlemi

                                                                Kamil Bala
*/

#include<iostream>

using namespace std;

int main()
{
    int x=5, y=10, takas;

    cout<< "x: " << x << endl;

    cout<< "y: " << y << endl;

    takas = y;

    y = x;

    x = takas;

    cout<< "takas sonrasi x: " << x << endl;

    cout<< "takas sonrasi y: " << y << endl;


    return 0;
}

