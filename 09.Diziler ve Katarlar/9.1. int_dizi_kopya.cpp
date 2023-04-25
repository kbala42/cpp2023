/*
    Bir dizinin kopyasını/yedeğini alma

                                                                Kamil Bala

*/
#include<iostream>
using namespace std;


int main()
{
    int yaslar1[5] = {15, 14, 17, 12, 16};
    int yaslar2[5];
/*
    // 1. yontem: Birebir diger diziye atama
    for(int i=0; i<5; i++) yaslar2[i]=yaslar1[i];

    for(int i=0; i<5; i++) cout<<yaslar2[i]<<endl;
*/
    // 2. yontem: Hafiza bolgesini kopyalama
    memcpy(yaslar2, yaslar1, sizeof(yaslar1));

    for(int i=0; i<5; i++) cout<<yaslar2[i]<<endl;

    return 0;
}
