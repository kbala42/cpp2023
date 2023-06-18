#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    fstream file;
    file.open("test.txt", ios::in | ios::binary) ;

    if(!file.is_open())
    {
        cout<<"Dosya acilamiyor.."<<endl;
    }
    else
    {
        string str;
        while(getline(file, str))
        {
            cout<<str<<endl;
        }

        file.close();
    }
    cout<<endl;
    return 0;
}
