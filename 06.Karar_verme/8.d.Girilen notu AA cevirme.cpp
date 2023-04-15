/*
    Girilen notu AA ve 5 sisteme donusturme

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int alinanNot;

    cout << "Notunu giriniz:"; cin >> alinanNot;

    if(alinanNot<0 || alinanNot>100 )
    {
        cout<<"Hatali not girdiniz! "<< endl;
    }
    else
    {
        switch (alinanNot)
        {
            case 90 ... 100:
            {
               cout <<"Harf Araligi: AA - Notu:4,00"<<endl;
               break;
            }
            case 85 ... 89:
            {
               cout <<"Harf Araligi: BA - Notu:3,50"<<endl;
               break;
            }

            case 80 ... 84:
            {
               cout <<"Harf Araligi: BB - Notu:3,00"<<endl;
               break;
            }

            case 75 ... 79:
            {
               cout <<"Harf Araligi: CB - Notu:2,50"<<endl;
               break;
            }
            case 70 ... 74:
            {
               cout <<"Harf Araligi: CC - Notu:2,00"<<endl;
               break;
            }

            case 65 ... 69:
            {
               cout <<"Harf Araligi: DC - Notu:1,50"<<endl;
               break;
            }
            case 60 ... 64:
            {
               cout <<"Harf Araligi: DD - Notu:1,00"<<endl;
               break;
            }

            case 50 ... 59:
            {
               cout <<"Harf Araligi: FD - Notu:0,50"<<endl;
               break;
            }

            default:
                cout <<"49 ve alti Harf Araligi: FF - Notu:0,00"<<endl;

        }

    }

    return 0;
}
