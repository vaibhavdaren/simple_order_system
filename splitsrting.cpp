#include <sstream>
#include<iostream>

using namespace std;

int main(){
    string line = "Happy birthday to you Happy birthday to you Happy birthday to Rujia Happy birthday to you";
    string arr[16];
    int i = 0;
    stringstream ssin(line);
    while (ssin.good() && i < 16){
        ssin >> arr[i];
        ++i;
    }
    for(i = 0; i < 16; i++){
        std::cout<< arr[i] << endl;
    }

}
