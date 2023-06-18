#include<iostream>
using namespace std;


void tablo(int i, int j)
{
    cout<<i<<"x"<<j<<"="<<i*j<<endl;
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
            tablo(i,j);
        }
    }


    return 0;
}
