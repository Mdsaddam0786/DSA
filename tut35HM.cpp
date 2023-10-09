#include<iostream>
using namespace std;


   void merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    //first part ka length
    int len1=mid+1;
    int len2=e;
 
    
    //   int *first=new int[len1];
    //   int *second=new int[len2];

    //   copying arrays values in two chhote arrays
    
    // for(int i=0; i<len1;i++){
    //     first[i]=arr[mainIndex++];
    // }
    // mainIndex=mid+1;

    // for(int i=0; i<len2; i++){
    //     second[i]=arr[mainIndex++];
    // }
   // merge two array
      int index1=0;
      int index2=mid+1;
      int mainIndex=s;
   while(index1<len1 && index2<len2){
    if(arr[index1]<=arr[index2]){
        mainIndex++;
        index1++;
    }
    else{
        arr[mainIndex++]=arr[index2++];
    }
   }

   while(index1<len1){
    arr[mainIndex++]=arr[index1++];
   }
   while(index2<len2){
    arr[mainIndex++]=arr[index2++];

   }
   }


  void MergeSort(int *arr,int s,int e){
   
 
    //base case
    if(s>=e){
        return ;
    }
      int mid=s+(e-s)/2;
    //sort left part
    MergeSort(arr,s,mid);
    //sort right part
    MergeSort(arr,mid+1,e);

    merge(arr,s,e);

  }
int main(){
    int arr[8]={4,6,8,3,1,4,7,2};
    int e=8;
   
   MergeSort(arr,0,e-1);
    for(int i=0;i<e; i++){
     cout<<arr[i]<<" ";
    }
}