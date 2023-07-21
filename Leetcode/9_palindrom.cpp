#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    int reminder = 0, reverse = 0, duplicate = x;
    if (x<0){
        return false;
    }else{
    while (duplicate != 0)
    {
        reminder = duplicate % 10;
        reverse = reverse * 10 + reminder;
        cout<<"reverse "<<reverse<<endl;
        duplicate = duplicate / 10;
    }
    if (reverse == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}}
int main()
{
    int z = 1234567899;
    cout << isPalindrome(z) << endl;
    return 0;
}