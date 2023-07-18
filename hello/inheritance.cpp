#include<iostream>
#include<cstring>
using namespace std;

class vehical{
    public:
        string brand="ford";
        void honk(){
            cout<<"Tuut tuut| \n";
        }
};

class car : public vehical{
    public:
        string model{"mustang"};

};

int main(){
    car mycar;
    mycar.honk();
    cout<<mycar.brand<<endl;

    return 0;
}