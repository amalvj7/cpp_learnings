#include <iostream>
#include <functional>

using namespace std;

int main() {
    // Lambda function to add two numbers
    auto add = [](int a, int b) {
        return a + b;
    };

    cout << "Sum: " << add(5, 3) << endl;

    // Lambda function with capture
    int x = 10;
    auto addToX = [x](int a) {
        return a + x;
    };

    cout << "Add to x: " << addToX(5) << endl;

    return 0;
}
