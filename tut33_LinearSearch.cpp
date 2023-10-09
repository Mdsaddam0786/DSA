#include<iostream>
using namespace std;
// linear search:
// is sorted or not
/*
bool isSorted(int arr[],int size){


    //base case
    if(size==0 || size==1){
        return true;
    }
    // logic
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remaining=isSorted(arr+1,size-1);
        return remaining;
   }
}
int main(){
    int arr[6]={1,2,3,11,5,6};
    int size=6;
    int ans=isSorted(arr,size);
    if(ans){
        cout<<" array is sorted ";
    }
    else{
        cout<<" array is not sorted ";
}*/
int GetSum(int arr[],int size){
    //base condition
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    else{
        int remaining=GetSum(arr+1,size-1);
        return remaining+arr[0];
    }
   
}

int main(){
    int arr[10]={1,2,3,4,4,5,3,5,7,9};
    
    cout<<GetSum(arr,10);
}
// search key value by linear search
/*
bool SearchValue(int arr[],int size,int key){
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remaining=SearchValue(arr+1,size-1,key);
        return remaining;
    }

}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int key=8;
    cout<<SearchValue(arr,6,key);
}
// search key value by binary search

bool searchValue(int arr[],int s,int e,int key){
    int mid=s+(e-s)/2;
    //base case
    if(s>e){
               return false;
    }
    if(arr[mid]==key){
        return true;
    }
    else{
        if(arr[mid]<key){
            bool remaining=searchValue(arr,mid+1,e,key);
            return remaining;
        }
        if(arr[mid]>key){
            bool remaining=searchValue(arr,s,mid-1,key);
          return remaining;

        }

    }
    
   }
int main(){
    int arr[10]={1,12,13,14,15,16,110};
    int s=0;
    int e=10;
    int key=14;


    cout<<searchValue(arr,s,e,key);

}*/







