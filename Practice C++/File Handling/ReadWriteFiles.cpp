#include<iostream>
#include<fstream>

/*
The useful classes for working with files in C++ are:
    1.fstreambase
    2.ifstream  ----> derived from fstreambase
    3.ofstream  ----> derived from fstreambase
*/

/*In order to work with files in C++, you have to open it, primarilyy there are 2 ways:
    1. using the construcor
    2. using the member function open() of the class
*/
using namespace std;

int main()
{
    string str = "Hello, My name is Sapna";
    string str2;

    //opening files using constructor & writing it
    ofstream out("SampleFile.txt");          //write operation
    out<<str;


    //opening files using constructor & reading from it
    ifstream in("SampleFileB.txt");             //Read operation
    //in>>str2;        //print only 1 word "This", after space and new line it will not print
    getline(in, str2);           //print a line 
    cout<<str2;
    return 0;
}