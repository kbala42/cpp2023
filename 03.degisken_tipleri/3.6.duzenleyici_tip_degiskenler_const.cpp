 /*

    const anahtar sözcüğü bir değişkenin değerinin sabit olduğunu belirtir ve
    derleyiciye programcının bunu değiştirmesini engellemesini söyler.

    Örneğin pi sayısı gibi sabit olan değerliğini başka bir yerde değiştirilmesini
    istemediğiniz sabit değişkenler belirtmek için kullanılabnilir. Büyük harflerle
    tanımlamak  ayırt edici yapacaktır. PI gibi.

                                            Kamil Bala

*/

#include <iostream>

using namespace std;

int main()
{
    const float PI = 3.1415;

    const int i = 0;
    // i++;

    cout << PI << endl;
    cout << i << endl;

    return 0;

}

