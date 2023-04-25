/*
    Dizi ve Katar

                                                                Kamil Bala


*/
#include<iostream>
using namespace std;


int main()
{
    string mesaj = "Merhaba";

    string isimler[] = {"Ahmet", "Nisa", "Hakan"};

    cout << mesaj << " " << isimler[0]<< endl;

    cout << mesaj << " " << isimler[2]<< endl;

    cout <<  "\nDongu kullanimi\n" << endl;

    for(int i=0; i<3;i++) cout << mesaj << " " << isimler[i]<< endl;

    return 0;
}
