 /*
    String Veri Tipi

                                            Kamil Bala
*/

#include <iostream>
using namespace std;

#include <string>

int main()
{

    string s = "Kahraman";

    cout <<  "0. ci eleman:" << s[0]  << endl;
    cout <<  "1. ci eleman:" << s[1]  << endl;
    cout <<  "7. ci eleman:" << s[7]  << endl;

    // harf degistirme
    s[0]='k';
    cout << s << endl;
    return 0;
}
