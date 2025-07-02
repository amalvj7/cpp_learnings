#include <iostream>
using namespace std;


int main(){
    // variable declaration
    string Name = "amal";
    int age = 23;
    double myDoubleNum = 5.99;
    char myLetter = 'D';
    bool myBool = true;
    string myText = "Hello";

    cout << "hi my name is " << Name << endl;
    cout << "i am " << age << " years old" << endl;


    //multiple variable declaration

    int x = 5 , y =6 , z = 8;
    int a, b, c;
    a = b = c = 55;

    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;

    const int myNum = 15;  // myNum will always be 15

    return 0;
}