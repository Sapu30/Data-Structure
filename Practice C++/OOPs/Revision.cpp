#include<bits/stdc++.h>
#include<string.h>
using namespace std;

class binary{
    string S;
    public:
       void read(void);
       void chk_bin(void);
       void ones(void);
       void display(void);
};

void binary :: read(void){
    cout<<"Enter binary number: ";
    cin>>S;
}

void binary :: chk_bin(void){
    for(int i = 0; i < S.length(); i++)
    {
        if(S.at(i) != '0' && S.at(i) != '1'){
            cout<<"Incorrect binary function"<<endl;
            exit(0);
        }
    }

}

void binary :: ones(void){
    for(int i = 0; i < S.length(); i++)
    {
        if(S.at(i) == '0'){
            S.at(i) = '1';
        } 
        else{
            S.at(i) = '0';
        }
    }

}

void binary :: display(void){
    cout<<"Display: ";
    for(int i = 0; i < S.length(); i++)
    {
        cout<<S.at(i);
    }
    cout<<endl;

}

int main()
{
//Nesting of member funtion
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones();
    b.display();
    
    return 0;
}


//OOPs - Classes and Objects
    //C++ --> intially called C --> C with classes by stroustroup
    //class  --> extensions of structure (in C)
    //Structure has limitation : 
    //           -> members are public
    //           -> No methods
    //classes -> structre + more
    //classes -> can have methods and properties
    //classes -> can make few members as pvt & few as public
    //structue in C++ are typedefed
    //you can declare objects along with the class declaration like this:
    /*         class Employe{
                     //class definition
               } harry, jack, marry;      */
    //can't do anything with pvt members of a class