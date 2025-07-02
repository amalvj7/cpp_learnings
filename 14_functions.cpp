#include <iostream>
using namespace std;


void myfn1(){
    cout << "hi this f didnot return anyhting " << endl;
}

void myfn2(string name){
      cout <<"hi it also didnot return anything but tae parameter " << name << endl;  
}


int myfn3(string name , int age){
    cout <<"hi it will return  " << name << endl;

    return age + 33;
}



int main(){

    myfn1();
    myfn2("nimm");
    myfn3("amal" ,55);

}

