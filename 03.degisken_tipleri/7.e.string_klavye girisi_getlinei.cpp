 /*
    String Veri Tipi

    Klavye girişi ve getline

                                            Kamil Bala
*/

#include <iostream>
#include <string>

using namespace std;

#include <string>

int main()
{

    string adSoyad;
    cout <<  "Ad ve Soyadinizi giriniz:";
    //cin>> adSoyad; // ilk kelimeyi alir
    getline(cin, adSoyad); // girilen butun kelimeleri almak icin

    cout<<"Ad ve Soyadiniz:"<< adSoyad <<endl;



    return 0;
}
