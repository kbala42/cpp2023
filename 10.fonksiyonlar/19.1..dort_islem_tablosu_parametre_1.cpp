/*
  f(x,y) = x*2+y

  f(3,4)= 3 *2 + 4=
    f(5,8) = 5 * 2 + 8=
*/


#include<iostream>
using namespace std;


int carpim(int i, int j)
{
    return i*j;
}
int toplam(int i, int j)
{
    return i+j;
}
int cikarma(int i, int j)
{
    return i-j;
}
int bolme(int i, int j)
{
    return i/j;
}
int main()
{
    /*
    1 x 5 = 5

    */
    for(int i=1; i<=10;i++)
    {
        for(int j=1; j<=10;j++)
        {
            cout<<i<<"+"<<j<<"="<<toplam(i,j)<<endl;

            cout<<i<<"-"<<j<<"="<<cikarma(i,j)<<endl;

            cout<<i<<"x"<<j<<"="<<carpim(i,j)<<endl;

            cout<<i<<"/"<<j<<"="<<bolme(i,j)<<endl;

            cout<<"-----------------------"<<endl;
        }
    }


    return 0;
}
