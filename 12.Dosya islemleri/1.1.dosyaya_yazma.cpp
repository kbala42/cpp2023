/*

    Dosya'ya yazma

*/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <clocale>
#include <fstream>

using namespace std;



int main() {

    setlocale(LC_ALL,"Turkish");

	ofstream outfile("yazi.txt");

	if(!outfile)
    {
        cout<<"yazi.txt dosyas� olu�turulamad�";
        exit(1);
    }
    outfile<<"Merhaba"<<endl;
    outfile<<10000<<endl;
    outfile<<9.81<<endl;

    outfile.close();

    cout<<"Dosyaya kay�t yap�ld�"<<endl;


	return 0;

}
