#include<iostream>
using namespace std;

struct Kisi
{
    string ad;
    int yas;

};

int main()
{
    Kisi kisi1;
    Kisi* ptr = &kisi1;


    kisi1.ad = "Hasan";
    kisi1.yas=30;

    cout<<kisi1.ad<<endl;
    cout<<kisi1.yas<<endl;

    cout<<"\npointer ile ulasma"<<endl;
    cout<<ptr->ad<<endl;
    cout<<ptr->yas<<endl;

    cout<<"\npointer ile degistirme"<<endl;
    ptr->ad="Halil";
    cout<<ptr->ad<<endl;
    cout<<ptr->yas<<endl;
    return 0;
}
