 /*
    char Veri Tipi
    Dizi tan�m�

                                           Kamil Bala

*/

#include <iostream>

using namespace std;

int main()
{
    char c1[] = "Merhaba"; // tan�m yap�labilir. Dizinin sonuna otomatik \o null atar. 7 elemanli dizi olur
    cout << "c1: " << c1 <<endl;

    char c2[6] = "Selam"; // �eklinde elelman sayisi verilerek yapilabilir. Ancak 5 yazarsan�z hata alinir.Sonunda \0 eklendigi icin
    cout << "c2: " << c2 <<endl;

    char c3[10] {'C','+','+','\0'};
    cout << "c3: " << c3 <<endl;

    return 0;

}

