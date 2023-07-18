#include<iostream>
using namespace std;

void towerOfHanoi(int disk,char source,char helper,char destination){
    /*https://www.youtube.com/watch?v=u-HgzgYe8KA*/
   if(disk==0){return;}
    
    towerOfHanoi(disk-1,source,destination,helper); //for other n-1 disk helper --> destination and destination -->helper
    cout<<"Disk transfer "<<disk<<" from "<<source<<" to "<<destination<<endl;
    towerOfHanoi(disk-1,helper,source,destination);

}

int main(){
    int n=3;
    towerOfHanoi(n,'a','b','c');
    return 0;
}