/*
    Arkadaşlarımızın doğum yılları ve oturuş sıraları şu şekilde verilmiş

    1. sıra: 2005, 2004, 2003
    2. sıra: 2008, 2006, 2002}

    Sırayla arkadaşlarımızın doğum tarihlerini ekrana yazdıran program

                                                                Kamil Bala

*/
#include<iostream>
using namespace std;


int main()
{
    int d_yili[2][3] = {2005, 2004, 2003,2008, 2006, 2002};// Elman sayisi belli olan dizi tek seferdede girilebilir

    int k = 1; // iç ice iki dongunun disinda tanimli

    for(int i=0; i<2;i++)
    {
        for(int j=0; j<3; j++, k++)
        {
            cout << k << ". arkadasimin dogum yili: " << d_yili[i][j] << endl;
        }
    }


    return 0;
}
