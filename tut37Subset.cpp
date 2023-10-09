#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*
//ek set hai,or uske saare possible subsets dikhayega 

  void solve(vector<int>set,vector<int>output,vector<vector<int>> &ans,int index){

    // Base case
    if(index >=set.size()){
        ans.push_back(output);
        return ;
    }

    //exclude
    solve(set,output,ans,index+1);

  }
//   include

  int element=set[index];
  output.push_back(element);
  solve(set,output,ans,index+1);


vector<vector<int>> FindSubset(vector<int>&set){

    int index=0;
   vector<vector<int>>ans;
   vector<int>output;
   solve(set,output,ans,index);


   return ans;

     
}

int main(){
    vector<int>set{1,2,3};
   

   FindSubset(set);
}*/
 void solve(string &str,string output,int index,vector<string> &ans){
    //base condition
    if(index>=str.length()){
        if(output.length()>0){
        ans.push_back(output);
        }
        return;
            }
    // exclude
    solve(str,output,index+1,ans);
    // include
    char element=str[index];
    output.push_back(element);
    solve(str,output,index+1,ans);

 }

 void subString(string &str){
    int index=0;
    string output="";
    vector<string>ans;

    solve(str,output,index,ans);

     for(string i:ans){
        cout<<i<<" ";
     }
     }
int main(){
    string str="abc";
   subString(str);

   

}
