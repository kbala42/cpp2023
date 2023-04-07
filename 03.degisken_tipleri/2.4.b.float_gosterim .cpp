 /*
    Float Veri Tipi

    Bilimsel Gösterimler .



                                            Kamil Bala

*/

#include <iostream>

using namespace std;

int main()
{
    /*
    //float frekans = 300000000;
    float frekans = 300'000'000;

    cout << "frekans: " << frekans  << endl;
    */
    // Planck sabiti : 6.62607 x 10-34;
    const float PLANCK = 6.62607E-34;

    cout << "Planck sabiti : " << PLANCK << endl;

    float f = 1E10;
    int i = f; // 2147483647 siniri gectigi icin  tasma

    cout << "f: " << f << endl;
    cout << "i: " << i << endl;

    return 0;

}

