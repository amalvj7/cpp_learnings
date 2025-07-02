#include <iostream>
using namespace std;

int main(){
    string food = "dosa";
    string &hmm = food;

    cout << "Original food: " << food << std::endl; // Output: Original food: dosa
    std::cout << "Reference hmm: " << hmm << std::endl; // here using & symbol point the him to the memory which is pointing by the food


    cout << &food << endl;
}