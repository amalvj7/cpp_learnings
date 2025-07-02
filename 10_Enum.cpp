//  enum is  an user define ddata type


#include <iostream>
using namespace std;    

int main() {
    // enum declaration
    enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
    
    // using enum
    Day today = Wednesday;

    // output the value of today
    cout << "Today is day number: " << today << endl; // 3

    // switch case with enum
    switch (today) {
        case Sunday:
            cout << "It's Sunday!" << endl;
            break;
        case Monday:
            cout << "It's Monday!" << endl;
            break;
        case Tuesday:
            cout << "It's Tuesday!" << endl;
            break;
        case Wednesday:
            cout << "It's Wednesday!" << endl;
            break;
        case Thursday:
            cout << "It's Thursday!" << endl;
            break;
        case Friday:
            cout << "It's Friday!" << endl;
            break;
        case Saturday:
            cout << "It's Saturday!" << endl;
            break;
    }

    return 0;
}