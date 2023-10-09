#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
/*
//sum of an array
int SumArray(int arr[],int size){

 int sum=0;
  for(int i=0; i<size; i++){
    sum=arr[i]+sum;

  }

  return sum;

    
}

int main(){
    int arr[5]={12,13,5,17,8};
    int size=5;

    cout<<SumArray(arr,size);


}


void ReverseArray(int arr[],int size){
    int s=0; 
    int e=size-1;

    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;


    }
   
}

void PrintArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={12,13,5,17,8};
    int size=5;

    ReverseArray(arr,size);
    PrintArray(arr,size);


}

//Find uniqe number

int UniqeNumber(int arr[],int size){

    int s=0; 
    int ans=0;
    int end=size-1;

    for(int i=0; i<=end; i++){

        ans=ans^arr[i];


    }
    return ans;
}

int main(){

    int arr[5]={2,5,7,5,7};
    int size=5;

   cout<<UniqeNumber(arr,size);
}

*/
 /*

// insert two array in single array

void Sort(int &arr1[], int &size){




    for(int i=0; i<size; i++){
        if(arr[i]<=arr[i++]){
            i++;
        }
        else{
            swap(arr[i],arr[i+1]);
            i++;

        }
    }
}

 vector<int> FindIntersectoin(int arr1[],int n,int arr2[],int m){
     
     vector<int>v;
    int i=0;
    int j=0;
    int k=0;
    Sort(arr1,n);
    Sort(arr2,m);

    while(i<=n  && j<=m){

        if(arr1[i]==arr2[j]){
            v.push_back(arr1[i]);
            i++;
            j++;
        }

        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{

            j++;
        }
    }
return v;

 }

 

 int main(){
    int arr1[5]={4,2,6,3,8};
    int arr2[5]={3,8,6,7,9};

   vector<int>v= FindIntersectoin(arr1,5,arr2,5);

   for(int i:v){
    cout<<i<<" ";
   }

Sort(arr1,5);
for(int i:arr1){
    cout<<i;
}



   


 }*/
/*
// leet code
//  Insert two array in a single array both array sorted
//nums1 me hi nums2 ko merge karna hai or agar 0 aaye to ignore
// leet code question


 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

           int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

    }

        void print(vector<int>& nums1){
            for(int i=0; i<nums1.size()-1; i++){
                cout<<nums1[i]<<" ";
            }
        }
        
    
int main(){
    vector<int>v={2,4,5,7};
    vector<int>v2={1,2,3};
    merge(v,5,v2,3);
    print(v);

}

//leet code 
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        int i=0;
        int j=0;
        vector<int>v;

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        while(i<=nums1.size()-1 &&  j<=nums2.size()-1){
            if(nums1[i]==nums2[j]){
                v.push_back(nums1[i]);
                i++;
                j++;

            }
           else if(nums1[i]<nums2[j]){
               i++;
           }
        
           else  {
               j++;
           }

           
            
        }
        
       v.erase(unique(v.begin(), v.end()),v.end());

        return v;

        
    }*/

//      geekforgeek
//   formate 0 left side and 1 right side in given array which is of
//   0 and 1 elements

void formateArray(int arr[],int size){
    int left=0;
    int right=size-1;
    
    while(left<right){
    while(arr[left]==0 && left<right){
        left++;
        

    }
    while(arr[right]==1 && left<right){
        right--;
    }
     if(arr[left]==1 && arr[right]==0){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    }
   
}
int main(){
    int arr[5]={1,1,0,1,0};
   formateArray(arr,5);
   cout<<" hello"<<endl;
   for(int i:arr){
    cout<<i<<" ";
   }


}

