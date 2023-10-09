#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
/*Problem:Rat in maze
ek dubble vector rahega or jo 0 or 1 se mapped rahega
ek rat rahega (0,0) par
ab rat ko last index(row(n-1),column(n-1)) par jana hai par rat Down,Right,Up,Left jayega
or rat usi index par jayega jis par 1 se mapped ho 0 wale par nahi jayega
example: 
         vector<vector<int>>table={{1,0,0,0},
                                   {1,1,0,0},
                                   {1,1,1,0},
                                   {0,1,1,1}};
*/

bool isSafe(int x,int y,vector<vector<int>>visited,int n,vector<vector<int>>&table){

    if((x>=0 && x<n)  && (y>=0 && y<n) && visited[x][y]==0 && table[x][y]==1){
        return true;

    }
    else{
        return false;
    }
}

  void solve(vector<vector<int>>&table,int n,vector<string>&ans,
  int x,int y,vector<vector<int>>visited,string& path){

    //base case
    if(x==n-1 && y==n-1 ){
        ans.push_back(path);
        return;
    }
    visited[x][y]=1;
   
   //agar down jaye to
   int newx=x+1;
   int newy=y;
   if(isSafe(newx,newy,visited,n,table)){
    path.push_back('D');
    solve(table,n,ans,newx,newy,visited,path);
    path.pop_back();

   }
    //agar left jaye to
     newx=x;
      newy=y-1;
   if(isSafe(newx,newy,visited,n,table)){
    path.push_back('L');
    solve(table,n,ans,newx,newy,visited,path);
    path.pop_back();
    
   }
    //agar right jaye to
    newx=x+1;
    newy=y;
   if(isSafe(newx,newy,visited,n,table)){
    path.push_back('R');
    solve(table,n,ans,newx,newy,visited,path);
    path.pop_back();
   }


    //agar up jaye to
    newx=x;
    newy=y-1;
   if(isSafe(newx,newy,visited,n,table)){
    path.push_back('U');
    solve(table,n,ans,newx,newy,visited,path);
    path.pop_back();


   }

    visited[x][y]=0;


  }

 vector<string> RatInMaze(vector<vector<int>>&table,int n){
     
     vector<string>ans;
     if(table[0][0]==0){
        return ans;
     }
    int srcx=0;
    int srcy=0;
    vector<vector<int>>visited=table;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            visited[i][j]=0;
        }
    }
    string path="";
    solve(table,n,ans,srcx,srcy,visited,path);
    
   return ans;
 }

int main(){
    vector<vector<int>>table={{1,0,0,0},
                             {1,1,0,1},
                             {1,1,0,0},
                             {0,1,1,1}};


        int n=4;

       vector<string>temp= RatInMaze(table,n);
       for(string s:temp){
        cout<<s<<" ";
       }
}
