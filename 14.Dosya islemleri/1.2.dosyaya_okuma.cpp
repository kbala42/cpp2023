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

	ifstream infile("yazi.txt");

	if(!infile)
    {
        cout<<"yazi.txt dosyasýna ulaþýlamadý";
        exit(1);
    }
    char dizi[50];
    int sayi;
    float noktali;

    infile>>dizi;
    infile>>sayi;
    infile>>noktali;

    infile.close();

    cout<<"Okuma iþlemi tamamlandý.."<<endl;

    cout<<dizi<<endl;
    cout<<sayi<<endl;
    cout<<noktali<<endl;

	return 0;

}
