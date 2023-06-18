#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    fstream file;
    file.open("test.txt", ios::out | ios::binary | ios::app);

    if(!file.is_open())
    {
        cout<<"Dosya acilamiyor.."<<endl;
    }
    else
    {
        file<<endl;
        string str="Selam...!";
        file<<str;

        file.close();
    }
    cout<<endl;
}
