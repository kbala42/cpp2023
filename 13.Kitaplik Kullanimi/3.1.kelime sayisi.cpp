/*

    Görev 3
    Yazdığınız bir  programda kullanıcıya bir karakter katarı içerisinde, kaç tane kelimeden
    oluştuğunu sayabilecek bir program yazınınız.




*/

#include <iostream>
#include <cstring>

using namespace std;



int main() {

    char mesaj[] = "Bugun hava pek cok guzel!";
    int kelimeSayisi = 0;
    for(int i=0; i<strlen(mesaj); i++)
    {
        if(mesaj[i] == ' ')
            kelimeSayisi++;
    }
    cout << "Bu cumlede " << kelimeSayisi+1 << " kelime bulunmaktadir.";




	return 0;

}
