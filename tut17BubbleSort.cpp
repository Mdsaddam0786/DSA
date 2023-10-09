#include<iostream>
#include<algorithm>
using namespace std;


// Bobble Sort Algorithm
// is algorithm me near by element ko swap karte hain

void BubbleSort(int arr[], int n){
//   ye loop round chalane ke liye use kiya gya hai
    for(int i=1; i<n; i++){
    // ye bagal ke element ko compare karke ke swap karne ke liye banaya gaya hai
        for(int j=0; j<n-i; j++){ 
            if(arr[j]>arr[j+1]){

                swap(arr[j] ,arr[j+1]);
            
            }  
        }
    }
}
int  PrintArray(int arr[],int n){

    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }


}


int main(){

    int arr[5]={1,4,2,7,6};
    int n=5;

    BubbleSort(arr,n);
   cout<<PrintArray(arr,n);



}