#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main(){
    vector<int> num = {1, 2, 3};
    vector<int>::iterator iter;
    iter=num.begin();
    cout<<"num[0] "<<&num<<endl;
    cout<<*iter;


    return 0;
}