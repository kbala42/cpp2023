/*
    Us hesaplama

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int sayiBir,us,carpim=1;

    cout<<"Ussu hesaplanacak sayiyi giriniz: "; cin>>sayiBir;

    cout<<"kacinci ussunu hesaplayacaksiniz: "; cin>>us;

    for(int i=1; i<=us; i++) carpim *= sayiBir;

    cout<<sayiBir<<" in "<<us<<". kuvveti = "<<carpim<<endl;

    return 0;

}
