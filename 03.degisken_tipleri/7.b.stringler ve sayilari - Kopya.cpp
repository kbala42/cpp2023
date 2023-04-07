 /*
    String Veri Tipi

                                            Kamil Bala
*/

#include <iostream>
using namespace std;

#include <string>

int main()
{

    int x = 5;
    int y = 3;

    cout <<  "iki sayinin toplami:"<< endl;
    cout << x << "+" << y << " = " << x+y << endl;

    string s1 = "5"; // rakam 1
    string s2 = "3"; // rakam 2

    cout <<  "iki rakamin toplami:"<< endl;
    cout << s1 << "+" << s2 <<" = " << s1+s2 << endl; // iki rakamin toplami yan yana yazilir

    // cout <<  "sayi ve rakamin  toplami hata:"<< endl;
    // cout << x << "+" << s2 << " = " << x + s2 << endl; // tip uyuşmazligi

    // stoi() metodu: string to int
    cout <<  "sayi ve rakamin  toplami donusum rakam int yapilarak:"<< endl;
    cout << x << "+" << s2 << " = " << x + stoi(s2) << endl; // tip uyuşmazligi

    // to_string() metodu: string to int
    cout <<  "sayi ve rakamin  toplami donusum int string yapilarak:"<< endl;
    cout << x << "+" << s2 << " = " << to_string(x) + s2 << endl; // tip uyuşmazligi

    return 0;
}
