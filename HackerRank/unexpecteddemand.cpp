#include<bits/stdc++.h>
#include<iostream>
using namespace std;

    int filledOrders(vector<int> order, int k) {
        int max=0;
        sort(order.begin(),order.end());
        for(int i=0; i<order.size();i++){
            if (order[i]<=k){
                k-=order[i];
                max++;
            }
        }return max;
    }
int main(){
    vector<int> order={5,4,6};
    cout<<filledOrders(order,3)<<endl;
    return 0;
}