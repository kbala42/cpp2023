/*
  1
  2 2
  3 3 3
  4 4 4 4
  şeklinde cikis veren programi yaziniz.


*/
#include<iostream>

using namespace std;

int main()
{
    int sayi;

    cout<<"Kaca kadar cikis yazdiracaksiniz:";cin>>sayi;
    for(int i=1; i<=sayi; i++)
    {
        for(int j=1; j<=i; j++)
        {
           cout<<i<<" ";
        }
        cout<<endl;
    }


    return 0;
}


