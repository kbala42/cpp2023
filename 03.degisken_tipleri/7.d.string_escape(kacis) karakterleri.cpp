 /*
    String Veri Tipi

    Kaçış (escape) karakterleri

    escape karakteri   sonuç    aciklama
    \'	                '	    tek tırnak
    \"	                "	    çift tırnak
    \\	                \	    ters slash
    \n	                        Yeni satir = endl
    \t	                Tab     bir tab boşluk

                                            Kamil Bala
*/

#include <iostream>
using namespace std;

#include <string>

int main()
{

    string s1 = "Ahmet\'in kalemi";
    cout <<  s1  << endl;

    string s2 = "Bilim adami \"Buldum!\" diye bagirdi";
    cout <<  s2  << endl;

    string s3 = "Ters slash \\ yazmak";
    cout <<  s3  << endl;

    string s4 = "yeni satira \n yazmak";
    cout <<  s4  << endl;

    string s5 = "uc satir \n\n\nbasluk birakmak";
    cout <<  s5  << endl;

    string s6 = "bir tab\tbosluk";
    cout <<  s6  << endl;

    string s7 = "uc  tab\t\t\tbosluk";
    cout <<  s7  << endl;

    return 0;
}
