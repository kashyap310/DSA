#include <iostream>
using namespace std;

int main()
{

    /*
    int row=1,count=1;
    while(row<=4){
        int col=1;
        while(col<=row){
            cout<<count<<" ";
            col+=1;
            count+=1;
        }
        cout<<endl;
        row+=1;
    }
    /*
    1
    2 3
    4 5 6
    7 8 9 10
    */
//--------------------------------------------------------------------------------------
    /*
    1
    2 3
    3 4 5
    4 5 6 7
    
    int row{1};
    while (row <= 4)
    {
        
        if (row == 1)
        {
            cout << row << " ";
        }
        else
        {   int col = 0;
            while (col < row)
            {
                cout << row + col << " ";
                col++;
            }
        }
        cout << endl;
        row++;
    }*/
//=--------------------------------------------------------

/*
1
2 1 
3 2 1
4 3 2 1

int row=1;
while(row<=4){
    int col=1;
    while(col<=row){
        cout<<row-col+1<<" "; //n-j+1
        col++;
    }row++;
    cout<<endl;
}
//------------------------------------------------------------
*/

    return 0;
}
