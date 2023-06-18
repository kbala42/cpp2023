#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    fstream file;
    file.open("test.txt", ios::out | ios::binary);

    if(!file.is_open())
    {
        cout<<"Dosya acilamiyor.."<<endl;
    }
    else
    {
        string str="Hello world";
        file<<str;

        file.close();
    }
    cout<<endl;
}
