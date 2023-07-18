#include<iostream>
using namespace std;

int fact(int n);

int main(){
    int number;
    cout<<"Enter Number : ";
    cin>>number;
    cout<<fact(number)<<endl;
    return 0;
}

int fact(int n){

    /*
    fact=n*fact(n-1)
    recursion : function call itself
    */
   if (n>0){
   if (n==1 or n==0){
    return 1;
   }else{
   return n*fact(n-1);
   }}else{
    cout<<"Negative Number\n";
   }

   /*
   
   */
}