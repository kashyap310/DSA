#include<iostream>
using namespace std;
#define n 100 //size of stack
class Stack{
    int* arr;
    int top;

    public:
        Stack(){
             arr=new int[n];
            top=-1;
        }
    void Push(int x){
        if(top==n-1){
            cout<<"Stack overflow"<<endl;
            return;
        }else{
            top++;
            arr[top]=x;
        }
    }
    void Pop(){
        if (top==-1){
            cout<<"stack is empty"<<endl;
            return;
        }else{
            top--;
        }
    }
    int Top(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return 12;
        }
        return arr[top];
    }
    };
int main(){
    Stack s;
    s.Push(3);
    cout<<s.Top()<<endl;
    return 0;
}