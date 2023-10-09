#include<iostream>
using namespace std;
// find peak element by binary search
int findPeak(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    //base condition 
    if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
        return arr[mid];
    }


    if(arr[mid]<arr[mid+1]){
        int remain=findPeak(arr,mid+1,e);
        return remain;  
    }
    if(arr[mid]>arr[mid+1]){
        int remain=findPeak(arr,s,mid);
        return remain;
    }
    

}

int main(){
    int arr[6]={1,2,300,51,4,2};
    int s=0;
    int e=6;
    cout<<findPeak(arr,s,e);
}