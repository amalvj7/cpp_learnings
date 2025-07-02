#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 0)
            throw age;  // throw an int
        cout << "Your age is " << age << endl;
    }
    catch (int x) {
        cout << "Error: Invalid age (" << x << ")" << endl;
    }

    return 0;
}
