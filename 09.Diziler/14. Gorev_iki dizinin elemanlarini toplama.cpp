/*
    5 elemanlı bir diziyi tanımlama ve okuma

                                                                Kamil Bala

    Haftalık oyun oynayan üç arkadaşın oyun sonunda aldıkları puanların ilk iki haftası
    aşağıda verilmiştir. Üçüncü hafta ise ilk iki haftanın puan toplamından oluşmalıdır.
    Buna göre bu üç arkadaşın üçüncü hafta puanlarını ekrana yazdıran programı tasarlayınız

    Deneyap Yazılım Teknolojileri Orta

    Hafta1  Oyuncu  Puan
            Ayse    1   0   1
            Burcu   0   0   0
            Can     0   2   0

    Hafta2  Oyuncu  Puan
            Ayse    1   1   1
            Burcu   2   0   0
            Can     0   2   0

    Hafta3  Oyuncu  Puan
            Ayse    ?   ?   ?
            Burcu   ?   ?   ?
            Can     ?   ?   ?

*/
#include<iostream>
using namespace std;


int main()
{
    // Dizilerin bildirimini yapıyoruz

    int hafta1[3][3]={{1,1,1},
                      {0,0,0},
                      {0,2,0}};

    int hafta2[3][3]={{1,1,1},
                      {2,0,0},
                      {0,2,0}};

    int hafta3[3][3];



    // Dizi elemanlarini sirayla tanimliyoruz

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            hafta3[i][j] = hafta1[i][j] + hafta2[i][j];
        }

    }

    // Dizi elemanlarini sirayla yazdiriyoruz

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<< hafta3[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
