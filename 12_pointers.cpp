#include <iostream>
using namespace std;

int main() {
    int number = 10;            // normal variable
    int* ptr = &number;         // pointer stores address of 'number'

    cout << "Value of number: " << number << endl;
    cout << "Address of number: " << &number << endl;
    cout << "Value of ptr (address it points to): " << ptr << endl;
    cout << "Value stored at ptr: " << *ptr << "\n" << endl;



    // modifying the addrss

    int m = 50;
    int* ptrm = &m;

    cout << "Value of number: " << m << endl;
    cout << "Address of number: " << &m << endl;
    cout << "Value of ptr (address it points to): " << ptrm << endl;

    *ptrm = 22;
    cout << "Value of number: " << m << endl;

    return 0;
}
