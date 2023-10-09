#include<iostream>
using namespace std;
// binary search for given target
int search(vector<int>& nums, int target) {



        int s=0;
        int end=nums.size()-1;
        int mid=s+(end-s)/2;

     
        while(s<=end){
            if(nums[mid]==target){
                return mid;
            }

            else if(target<nums[mid]){
                end=mid-1;

            }
            else{
                s=mid+1;
            }

            mid=s+(end-s)/2;

        }

        return -1;
    

        
}


//peak element find karna hai
int FindPeak(int arr[],int size) {
    int s=0;
    int end=size-1;
    int mid=s+(end-s)/2;

    while(s<end){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        
        else{    
            end= mid;
        }
        mid=s+(end-s)/2;
    }
    return s;
}
int main(){
    int arr[8]={1,2,9,2,3,4,5,6};
    cout<<"answer is "<<endl;
   
    cout<<FindPeak(arr,8);
}