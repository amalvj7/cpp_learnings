#include   <iostream>
#include   <array>
using namespace std;

int main(){
    string animal[4] ={"cat" , "dog" , "zebra" , "fish"};
    int numbers[] = { 1 ,4 ,6 ,7,2};

    //accessing 
    cout << animal[4] << endl;

    //array and loop
    for (int i = sizeof(numbers); i < 0 ; i--){
        cout << numbers[i] << endl;
    }

    // multidimenial array

    int multi_array[3][3] = {{1,3,4} ,
                        {6,7,7},
                        {6,7,1}};


}