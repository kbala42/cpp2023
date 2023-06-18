#include<iostream>
using namespace std;

struct Kisi
{
    string ad;
    int yas;
    void mesaj()
    {
        cout<<"Merhaba"<<endl;
    }

};
void bilgiAlValue(Kisi nesne)
{
    cout<<"yapinin kopyalanmis kismi"<<endl;
    nesne.ad="Ahmet";
    cout<<nesne.ad<<endl;
    cout<<nesne.yas<<endl;
}
void bilgiAlReferans(Kisi *ptr)
{
    cout<<"yapinin referansinin geldigi kismi"<<endl;
    cout<<ptr->ad<<endl;
    cout<<ptr->yas<<endl;
}
int main()
{
    Kisi kisi1;

    kisi1.ad = "Hasan";
    kisi1.yas=30;

    bilgiAlValue(kisi1);
    bilgiAlReferans(&kisi1);
    kisi1.mesaj();

    return 0;
}
