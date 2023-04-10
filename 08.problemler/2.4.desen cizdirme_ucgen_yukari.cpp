/*
    Ekrana Kare Deseni Cizdirme
    Yukari ucgen

                                                                Kamil Bala
*/
#include<iostream>

using namespace std;


int main()
{

    for (int i=0; i< 6; i++)
    {
        for (int k= i; k <  5 ; k++)
        {
            cout << " ";
        }

        for (int j = 0; j <  i * 2 - 1 ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
