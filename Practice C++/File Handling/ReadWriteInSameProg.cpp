#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string name;
    //connecting our file with hout stream
    ofstream hout("SampleFileA.txt");

    //creating a name string and filling the variable entered by the user
    cout<<"Enter your name: ";
    //cin>>name;          //print only sapna
    getline(cin,name);     //print whole line "sapna kumari"

    //writing the string to the file
    hout<<"My name is "+ name;

    hout.close();       


    ifstream hin("SampleFileA.txt");
    string content;
    //hin>>content;         //print only one word
    getline(hin, content);        //print whole line
    cout<<"The content of this file is: "<<content;
    hin.close();

    return 0;
}


