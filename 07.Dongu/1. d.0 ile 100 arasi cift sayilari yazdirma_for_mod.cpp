/*
    1 ile 100 arası çift sayıları ekrana yazdıran program
    2 ye gore mod

                                                        Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    for(int sayac=0; sayac<=100;sayac++)
    {
        if(sayac%2 == 0) cout<<sayac<<endl;
    }

    return 0;
}
