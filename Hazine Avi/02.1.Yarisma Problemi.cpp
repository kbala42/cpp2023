/*
XOX OYNA
Kaþýk Adasý’na hoþ geldiniz.

Ýkinci sýrada Balýkçý Adasý vardýr. Balýkçý Adasý’nýn þifresini kazanmak için maceracýlarýmýz
ada yerlilerine XOX oyunu yazmak için yardým etmelidir.

XOX oyunu iki kiþi ile oynanan 3x3 bir tahta oyunudur. Bir kiþi tahtaya 'X' koyduðunda rakibi
'O' koymaktadýr. Oyunun amacý 3 adet ‘X’ ve ‘O’ harflerini yan yana, üst üste veya çapraz
olarak yerleþtirmektir. Maceracýlar XOX tahtasýnýn durumuna göre bir oyunun bitip
bitmediðini tüm olasý durumlar için kontrol eden programý yazarlar. Verilen tahta durumuna
göre eðer oyun bitti ise ekrana XOX yazdýrýlmasý, bitmediyse DEVAM yazdýrýlmasý
gerekmektedir.

Maceracýlar yazdýklarý bu programda aþaðýdaki XOX tahta durumunu test eder. Program çýktýsý
Balýkçý adasýnýn þifresidir.

X
X
O

1. Ýpucu: Tahtayý char tahta[3][3] þeklinde tanýmlayabilirsiniz.
tahta[0][0] = ‘X’, tahta[1][0] = ‘X’, tahta[2][0] = ‘O’

2. Ýpucu: Satýr ve sütun kontrolü yaparken 1 döngü ve 1 if koþulu yeterli olacaktýr.
*/
// YARIŞMA PROBLEMI 2:
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    char tahta[3][3];
    tahta[0][0] = 'X';
    tahta[1][0] = '0';
    tahta[2][0] = 'X';
    bool bitti = false;
    //Satir KontrolÃ¼
    for(int i=0;i<3;i++)
    {
        if(tahta[i][0] == tahta[i][1] && tahta[i][1] == tahta[i][2] )
        {
            bitti = true;
        }
    }
    //SÃ¼tun KontrolÃ¼
    for(int i=0;i<3;i++)
    {
        if(tahta[0][i] == tahta[1][i] && tahta[1][i] == tahta[2][i] )
        {
            bitti = true;
        }
    }
    //SaÃ° Capraz KontrolÃ¼
    if(tahta[0][0] == tahta[1][1] && tahta[1][1] == tahta[2][2] )
    {
        bitti = true;
    }
    //Sol Çapraz KontrolÃ¼
    if(tahta[0][2] == tahta[1][1] && tahta[1][1] == tahta[2][0] )
    {
        bitti = true;
    }
    if(bitti == true)
        cout <<"XXX";
    else
        cout <<"DEVAM";


    return 0;
}
