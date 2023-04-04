/*
    1 ile 10 arası sayıları ekrana yazdıran program

                                                                Kamil Bala

    Örnek olay: Ahmet okul kütüphanesindeki raflara herkesin kolayca kitapları bulabilmesi için sayı
    etiketleri yapıştırmak istiyor. Kütüphanede 100 tane raf olduğu düşünülürse Ahmet’in 1’den
    100’e kadar sayıları sıralayıp ekranda göstermesi gerekmektedir
                                                        Deneyap Yazılım Teknolojileri Lise
*/
#include<iostream>
using namespace std;



int main()
{
    int sayac = 1;

    basla:// etiket tanımlıyoruz

    cout<<sayac<<endl;
    sayac++;

    if (sayac < 11) goto basla;

    return 0;
}
