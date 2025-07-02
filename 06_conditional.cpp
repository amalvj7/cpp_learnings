#include <iostream>
using namespace std;

int main() {
    // if else statement
    int age;
    cout << "Enter the age: ";
    cin >> age;

    if (age > 18) {
        cout << "Eligible for voting" << endl;
    } else {
        cout << "Not eligible" << endl;
    }

    // if else if ladder
    int vayas;
    cout << "Enter the vayas: ";
    cin >> vayas;

    if (vayas < 18) {
        cout << "Teenage aan avan" << endl;
    } else if (vayas >= 18 && vayas < 30) {
        cout << "Adult life" << endl;
    } else {
        cout << "Old age" << endl;
    }

    return 0;
}
