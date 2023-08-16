#include<iostream>
#include<vector>

using namespace std;


int getMaxCount(vector<int> people, vector<char> status) {
    int max_c=0;

       for(int i=0;i<people.size();i++){
       
        if(status[i]=='+'){
            max_c+=people[i];
        }else{
            max_c-=people[i];
        }if(max_c<0){
            return -1;
        }
       
    }return max_c;

    }

int main(){
    vector<int> people ={1,1};
    vector<char> status ={'-','+'};
    cout<<getMaxCount(people,status)<<endl;
    return 0;
}