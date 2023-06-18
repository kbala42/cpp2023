/*
    Girilen sayi araliginda ki sayilari ekrana yazdirma

                                                                Kamil Bala

*/

#include<iostream>
#include<cmath>
using namespace std;



int main()
{
    int ilk, son;
    cout<<"ilk sayiyi  girin:";cin>>ilk;
    cout<<"son sayiyi  girin:";cin>>son;

    for(int i=ilk;i<=son;i++)
    {
        cout<<i<<" sayisinin carpanlari: ";
        for(int j=1; j<=i/2;j++)
        {
            if(i%j == 0)
            {
                cout<<j<<"\t";
            }

        }
        cout<<i<<endl;
    }

    return 0;

}
