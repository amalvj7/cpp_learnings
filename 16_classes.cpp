#include <iostream>
using namespace std;


class myclass{
    public:
        int myAge;
        string myName;

        void myfn1(){
            cout << "hi its a method of an clss" << endl;
        }
};


int main(){

    myclass myobj;

    myobj.myAge = 23;
    myobj.myName ="vj";

    myobj.myfn1();

    cout << myobj.myAge  << "  " <<  myobj.myName << endl;


}