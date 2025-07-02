#include <iostream>
using namespace std;

int main(){
    string nthan = "onnumilla";
    string person = "amal";

    // concatination
    string sentence = nthan + "  " +  person;
    cout << sentence << endl;

    //calling fns
    cout <<"the length of the sentence is" << sentence.length() << endl;


    //accesing string
    cout << sentence[2] << endl;

    //getting user inpuut
    int inputnumber;
    cin >> inputnumber;
    cout << "the inputed number is " << inputnumber << endl;
    
   
}