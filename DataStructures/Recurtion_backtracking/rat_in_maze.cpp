#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int x,int y,int size,vector<vector<int>> &maze){
    /* check safe place for rat and check if move avaliable*/
    return(x>=0 && x<size && y>=0 && y<=size && maze[x][y]==1);
}

bool rateInMaze(int x,int y,int size, vector<vector<int>> &maze,vector <vector<int>> &soln){
    if(x==size-1 && y==size-1 && maze[x][y]==1){ //checking goal condition
        soln[x][y]=1;
        return true;
    }
    if (isSafe(x,y,size,maze)==true){
        soln[x][y]=1;  //assign to the path
        if(rateInMaze(x+1,y,size,maze,soln)==true){
            return true;
        }
        if(rateInMaze(x,y+1,size,maze,soln)==true){
            return true;
        }
    soln[x][y]=0; //backtrack to the original position
    }return false;
    return false;
}


int main(){
    vector<vector<int>> maze={
        {1,0,0,0},
        {1,1,1,0},
        {0,1,0,1},
        {1,1,1,1}
    };
    vector<vector<int>> soln{
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}

    };
    rateInMaze(0,0,4,maze,soln);
     for (int i = 0; i < soln.size(); i++)
    {
        for (int j = 0; j < soln[i].size(); j++)
        {
            cout << soln[i][j] << " ";
        }    
        cout << endl;
    };

    return 0;
}