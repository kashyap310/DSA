#include <bits/stdc++.h>
#include<iostream>
#include <algorithm>
using namespace std;

int lsb(string s){
    /*Given a string s, find the length of the longest substring
without repeating characters.
use magical sliding window to find maximum length of subsitring*/
    int left=0,right=0,max_length=0;
    unordered_set<char> char_set;
    while(right<s.length()){
        if(char_set.find(s[right])==char_set.end()){
            char_set.insert(s[right]);
            max_length=max(max_length,right-left+1);
            right++;
        }else{
            char_set.erase(s[left]);
            left++;
            
        }
    }
    return max_length;
}

int main(){
    cout<<lsb("abcabcbb")<<endl;
    
        return 0;
}