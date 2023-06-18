// pointer dizi

#include <iostream>
using namespace std;


int main() {

    char isim[10] = "Hakan";
    char soyisim[10] ={'C', 'A', 'N','\0'};
    char *soyad;

    soyad = soyisim;

    cout<<*soyad<<endl;
    cout<<*(soyad+1)<<endl;
    cout<<*(soyad+2)<<endl;
    cout<<*(soyad+3)<<endl;
    return 0;
}
