/*
    Girilen nota gore puan hesaplayan program

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int notGir;
    cout << "notu giriniz:"; cin >> notGir;

    if(notGir>= 85 && notGir<=100)  cout << "5";

    else if(notGir>= 70 && notGir<=84) cout << "4";

    else if(notGir>= 55 && notGir<=69) cout << "3";

    else if(notGir>= 45 && notGir<=54) cout << "2";

    else if(notGir>= 25 && notGir<=44) cout << "1";

    else if(notGir>= 0 && notGir<=54) cout << "0";

    else cout <<"Hatali not girdiniz";

    return 0;


    return 0;
}
