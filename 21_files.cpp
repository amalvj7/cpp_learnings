#include <iostream>
#include <fstream>
using namespace std;



int main(){
    //create and open new file called amal
    ofstream write_obj("amal.txt");

    // writing the cintent in files
    write_obj << "hi learned to write in an file" << endl;

    write_obj.close();

    // reading the file
    fstream read_obj("amal.text");
    string textstorage ;

    while(getline(read_obj , textstorage)){
        cout << textstorage << endl;
    };

    read_obj.close();
    return 0;

}



//fstream	Creates and writes to files
//ifstream	Reads from files
//fstream	A combination of ofstream and ifstream: creates, reads, and writes to files