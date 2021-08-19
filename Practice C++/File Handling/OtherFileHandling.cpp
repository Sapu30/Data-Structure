#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    // using member function open()
    ofstream out;
    out.open("SampleFileA.txt");
    out<<"This is me \n";
    out<<"This is also me ";
    out<<" This is me also \n";

    out.close();

    ifstream in;
    string str1, str2;
    in.open("SampleFileB.txt");
    //in>>str1>>str2;
    // getline(in, str1);
    // getline(in, str2);

    while(in.eof() == 0){
        getline(in, str1);
        cout<<str1<<endl;
    }
    // cout<<str1<<endl;
    // cout<<str2;
    in.close();
    return 0;
}