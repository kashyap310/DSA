#include<iostream>
#include<cstring>
#include<fstream> //file operations
using namespace std;

int main(){
    ifstream MyreadFile("struct");
    string text;
    while (getline (MyreadFile,text))
    {
        /* code */
        cout<<text;
    }
    MyreadFile.close();
    
    return 0;
}