/*
    Kardeş olan iki peyzaj ustası kare şeklinde olan bahçelerine
    peyzaj yapmak istiyor.

    Ev sahipleri bahçelerine bir havuz yaptırmak istiyor. Bahçeyi
    inceleyen ustanın,havuzun yapılacağı alanı hesaplamaya ihtiyacı var.
    Ev sahiplerine istedikleri havuzun yarıçapını belirlemelerini istiyor.
    Ev sahiplerinden bu bilgiyi aldıktan sonra, daire şeklindeki havuzun
    alanını hesaplayan bir programa bilgileri giriyor. Ustanın kullandığı
    programın kodlarını tasarlayınız (Dairenin alanı hesaplama formülü:
            𝑝𝑖 ∗ 𝑟 ∗ 𝑟 ve 𝑝𝑖 = 3.14).
    İpucu! Sınıf içerisinde tanımlanacak yarıçap bilgisinin usta tarafından
    erişilebilir olmasına dikkat ediniz.

    Alıntı: Deneyap Yazılım Teknolojileri

*/


#include<iostream>
using namespace std;

class Daire
{
    public:
        float yariCap;

        float alanBul(float yariCap)
        {
            return 3.14 * yariCap * yariCap;
        }
};

int main()
{
    Daire daire;
    cout << "Dairenin yaricapini giriniz: ";
    cin >> daire.yariCap;

    cout<<"Daire Alani: "<<daire.alanBul(daire.yariCap)<<"\n";

    return 0;
}
