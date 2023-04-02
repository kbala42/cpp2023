 /*
    string veri tipi

                                Kamil Bala
*/

#include <iostream>
using namespace std;

int main()
{

    cout<<"---string veri tipi---"<<endl;

    // string veri tipi (32 byte)
    cout << "char boyutu: " << sizeof(string) << endl;

    //String	32	byte	-
    // Karakter dizisi, bir	veya birden fazla char

    string s1 = "a";
    string s2 = "A";
    string s3 = "AB";
    string s4 = "1";
    string s5 = "10";
    string s6 = "ArZ5";
    string s7 = "Merhaba C++ Dunyasi";

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    cout << "s4: " << s4 << endl;
    cout << "s5: " << s5 << endl;
    cout << "s6: " << s6 << endl;
    cout << "s7: " << s7 << endl;


    return 0;
}
