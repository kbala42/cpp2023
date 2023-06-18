/*


*/


#include<iostream>
#include<cstring>

using namespace std;

class Kus
{
    public:
        char tur [20];
        char ad [20];
        void ucma();

};
void Kus :: ucma()
{
    cout<<"Kuslar kanatlarini kullanarak ucarlar"<<endl;
}



int main()
{
    Kus kus1;
    strcpy(kus1.tur,"Muhabbet Kusu");
    strcpy(kus1.ad,"Boncuk");
    cout<<"Kusun Turu: "<<kus1.tur<<"Adi: "<<kus1.ad<<endl;
    kus1.ucma();

    return 0;
}
