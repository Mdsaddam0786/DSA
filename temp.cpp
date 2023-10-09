#include<iostream>
#include<bits/stdc++.h>

using namespace std;
/*
vector<int> twoSum(vector<int>&arr, int target) {
        int s=0;
        int e=arr.size()-1;
        vector<int>temp;
        while(s<=e){
            for(int i=0; i<e;i++){
                if(arr[i]+arr[i+1]==target){
                    temp.push_back(i);
                    temp.push_back(i+1);
                    
 
                }

                    
            }
            
            break;
        }
        
        for(int i:temp){
            cout<<i;
        }
        
    }
    

int main(){
    vector<int>vec{2,4,6,7,5};

    twoSum(vec,13);



}*/

// 1. Two sum

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.
// agar neighbour element sirf check karne hai to upar wala shai hai nahi to galat hai;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>temp;
        int e=nums.size();
  
 for(int i = 0; i<e; i++)
  
 
     for(int j = i+1 ; j<e ; j++){

   


         if(  nums[i]+nums[j]==target){
             temp.push_back(i);
             temp.push_back(j);
            
         }
        
     }
     return temp;
 
        
        
    }
};
/*