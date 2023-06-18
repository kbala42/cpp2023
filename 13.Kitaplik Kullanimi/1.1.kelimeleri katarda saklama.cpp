/*

    Görev 1
    Klavyeden karakterleri sırasıyla girilen “Arda” ismini “a” değişken adıyla karakter dizisinde,
    “Duru” ismini ise “b” değişken adıyla katarda tutarak ekrana yazdıran kodu oluşturunuz.


*/

#include <iostream>


using namespace std;



int main() {

    char a[4], b[5];

    cout<<"1. kelimeyi giriniz:"<<endl;

    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }

    cout<<"2. kelimeyi giriniz:"<<endl;

    for(int i=0;i<4;i++)
    {

        cin>>b[i];
    }

    b[4]='\0';

    cout<<"1. kelime:"<<endl;

    for(int i=0;i<4;i++)
    {
        cout<<a[i];
    }

    cout<<"\n2. kelime:"<<endl;

    cout<<b<<endl;


	return 0;

}
