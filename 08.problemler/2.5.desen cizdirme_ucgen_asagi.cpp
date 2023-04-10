/*
    Ekrana Kare Deseni Cizdirme

    Asagi dogru ucgen

                                                                Kamil Bala
*/
#include<iostream>

using namespace std;


int main()
{

    for (int i=5; i>0; i--)
    {
        for (int k= i; k < 5 ; k++)
        {
            cout << " ";
        }

        for (int j= 0; j < i * 2 - 1 ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
