#include<iostream>
#include<string>
#include<vector>
using namespace std;


/*question:permutation
 explaination
ek vector diya hoga jaise,{1,2,3};
ab iske saare combination bana kar de dena hai*/
 void solve(vector<int>nums,int index,vector<vector<int>>&ans){
    //base case
    if(index>nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int j=index; j<nums.size(); j++){
        swap(nums[index],nums[j]);
        solve(nums,index+1,ans);
        //Backtracking
        swap(nums[index],nums[j]);
    }

 }
vector<vector<int>> Permutation(vector<int>&nums){
    int index=0;
    vector<vector<int>>ans;
    solve(nums,index,ans);
    
   
    
    for(int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size(); j++){
        cout<<ans[i][j]<<" ";
    }
   }
    }
int main(){
    //code sahi bus dubble vector return karne me foult hai
    vector<int>nums={1,2,3};
    vector<vector<int>>temp;
    Permutation(nums);

    

}