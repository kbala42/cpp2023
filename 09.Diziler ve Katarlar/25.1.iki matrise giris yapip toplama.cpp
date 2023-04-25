/*
    İki matrise giris yapip toplama

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;


int main()
{
    int satir, sutun;

    cout<<"matrislerin satir sayisini giriniz: "; cin>>satir;
    cout<<"matrislerin sutun sayisini giriniz: "; cin>>sutun;

    int matris1[satir][sutun];
    int matris2[satir][sutun];
    int matris3[satir][sutun];

    for (int i = 0; i< satir; i++)
    {
       for (int j = 0; j < sutun; j++)
       {
           cout<<"matris1["<<i<<"]["<<j<<"]: "; cin>> matris1[i][j];
       }
       cout<<"\n";
    }
    cout<<"\n";

     for (int i = 0; i < satir; i++)
     {
         for (int j = 0; j < sutun; j++)
         {
             cout<<"matris2["<<i<<"]["<<j<<"]: "; cin>> matris2[i][j];
         }
         cout<<"\n";
     }
     cout<<"\n";

     for (int i = 0; i < satir; i++)
     {
         for (int j = 0; j < sutun; j++)
         {
             matris3[i][j]=matris1[i][j]+matris2[i][j];
         }
     }
     cout<<"\nBirinci Matris\n";

     for (int i = 0; i < satir; i++)
     {
         for (int j = 0; j < sutun; j++)
         {
             cout<< matris1[i][j];
             cout<<"  ";
         }
         cout<<"\n";
     }
     cout<<"\nIkinci Matris\n";

     for (int i = 0; i < satir; i++)
     {
         for (int j = 0; j < sutun; j++)
         {
             cout<< matris2[i][j];
             cout<<"  ";
         }
         cout<<"\n";
     }
     cout<<"\nUcuncu Matris\n";

     for (int i = 0; i < satir; i++)
     {
         for (int j = 0; j < sutun; j++)
         {
             cout<< matris3[i][j];
             cout<<"  ";
         }
         cout<<"\n";
     }
     cout<<"\n";

    return 0;
}
