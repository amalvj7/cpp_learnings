#include <iostream>
using namespace std;


int main(){
    struct{
        int mynum ;
        string myname;
    }mystruct;


    cout << "enter ur name" << endl;
    cout << "enter you number" << endl;

    cin >> mystruct.myname;
    cin >> mystruct.mynum;

    cout << mystruct.myname << endl;
    cout << mystruct.mynum << endl;
}