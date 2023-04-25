/*
    Iki matrisi karsilastirma

                                                                Kamil Bala

    Kodlayıcı: Aşağıdaki matris yapısında voleybol oyuncularının numaraları verilmektedir. Koç,
    oyuncuları iki maç öncesi aşağıdaki gibi aynı sırada görmek istiyor. İki maçtada sıralamanın
    aynı olduğundan emin olmak için bir kod tasarlamayı düşünüyor, ancak yardıma ihtiyacı var.
    Koç için bu programı sen tasarlar mısın? Program içerisinde tanımlama bölümünde
    oyuncuların ilk dizilimi aşağıdaki matristeki gibi olmalıdır.

    1. Maç Oyuncu Sırası:

        1   3   5   7   9
        11  13  15  17  19
        2   4   6   8   10
        12  14  16  18  20

    2. Maç Oyuncu Sırası:

        1   3   5   7   9
        11  13  15  17  19
        2   4   6   8   10
        12  14  16  18  20

*/
#include<iostream>
using namespace std;


int main()
{
    int matris1[4][5] = { {1, 3, 5, 7, 9},
                          {11, 13, 15, 17, 19},
                          {2, 4, 6, 8, 10},
                          {12, 14, 16, 18, 20}};

    int matris2[4][5] = { {1, 3, 5, 7, 9},
                          {11, 13, 15, 17, 19},
                          {2, 4, 6, 8, 10},
                          {12, 14, 16, 18, 20}};

    bool durum = true;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            if (matris1[i][j] != matris2[i][j]) durum = false;

    if (durum)cout << "Siralama ayni";
    else cout << "Siralama farkli";

    return 0;
}
