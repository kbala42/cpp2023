/*


*/


#include<iostream>
#include<cstring>

using namespace std;

class Hayvan
{
    public:
        char tur[20];
        char ad[20];
        void hareket();

};
void Hayvan :: hareket()
{
    cout<<"Hayvanlar hareket edebilir"<<endl;
}



int main()
{
    Hayvan hayvan;
    strcpy(hayvan.tur,"Kedi");
    strcpy(hayvan.ad,"Gece");
    cout<<"Hayvan Turu: "<<hayvan.tur<<" Adi: "<<hayvan.ad<<endl;
    hayvan.hareket();

    return 0;
}
