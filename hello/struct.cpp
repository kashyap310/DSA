#include<iostream>
using namespace std;


int main(){
struct myNum{
    int num1;
    char c;
    bool value;
};
 
myNum n;
n.num1=30;
std::cout<<&n<<endl;



return 0;
}
