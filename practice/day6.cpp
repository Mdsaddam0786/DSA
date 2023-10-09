#include<iostream>
using namespace std;

// find pivot in an roatated array

int FindPivot(int arr[], int size){

    int s=0;
    int end=size-1;

    int mid=s+(end-s)/2;

    while(s<end){
    
      if(arr[0]<=arr[mid]){
        s=mid+1;
      }

      else{
        end=mid;
      }
        mid=s+(end-s)/2;
    }

    return end;


}

int main(){
   int arr[5]={3,4,5,1,2};
   int size=5;

   cout<<FindPivot(arr,size);



}