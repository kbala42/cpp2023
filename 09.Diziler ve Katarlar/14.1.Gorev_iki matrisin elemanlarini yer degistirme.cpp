/*
    Bir matrisin elemanlarini yer değiştirme
                                                                Kamil Bala



*/
#include<iostream>
using namespace std;


int main()
{
    int i, j, sat, sut, matris1[5][5], matris2[5][5];
    sat = 5;
    sut = 5;

    cout << "Matrisin elemanlarini sirayla giriniz: " << endl;

    for(i =0; i < sat; i++) {
        for(j=0; j < sut; j++) {
            cin >> matris1[i][j];
        }
    }

    for(i=0; i < sat; i++) {
        for(j=0; j < sut; j++) {
            matris2[j][i] = matris1[i][j];
        }
    }

    cout<<"Matrisin Yer Degistirilmis Hali: " << endl;

    for(i=0; i < sut; i++) {
        for(int j=0; j < sat; j++) {
            cout << matris2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
