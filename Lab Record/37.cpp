#include <iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    const char* original = "hello";
    char* copiedString = new char[strlen(original)+1];

    strcpy(copiedString , original);
    cout<<"original: "<<original<<endl;
    cout<<"copied: "<<copiedString;

    delete[] copiedString;
    return 0;
}