/*

    Struct (Yapý) ile Dosya'ya Kayýt

    personel yapisý oluþturma

*/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <clocale>
#include <fstream>

using namespace std;

struct personel
{
    char ad[30];
    char soyad[30];
    int yas;
};
void kayit(char *ptr)
{
    fgets(ptr, 30, stdin);
    int n = strlen(ptr);
    ptr[n-1]='\0';
}

int main() {

    setlocale(LC_ALL,"Turkish");

    struct personel per[3];
    char yas[10];
    //Giriþ
    for(int i=0; i<3; i++)
    {
        cout<<"Ad    :"; kayit(per[i].ad);
        cout<<"Soyad :"; kayit(per[i].soyad);
        cout<<"Yaþ   :"; kayit(yas);

        per[i].yas= atoi(yas);
    }

    cout<<endl;

    // Çýkýþ
    for(int i=0; i<3; i++)
    {
        cout<<per[i].ad<<"\t"<<per[i].soyad<<"\t"<<per[i].yas<<endl;
    }
    cout<<"\nKayýtlar alýndý"<<endl;

	return 0;

}
