#include<iostream>
#include<vector>
using namespace std;
/*

void reverse(int arr[],int n){
int s=0;

int e=n-1;

while(s<=e){
    
    swap(arr[s],arr[e]);
    
    
    s++;
    e--;
    }


}
void PrintVector(int arr[],int n){
    for(int i=0; i<n; i++){

        cout<<arr[i];
    }
}




int main(){
    
    int arr[5]={3,4,6,7,5};
    int n=5;
    reverse(arr,n);
    PrintVector(arr,n);

}

void MergeArray(int arr1[], int m, int arr2[], int n, int arr3[]){

    int i=0; 
    int j=0; 
    int k=0; 
    
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
           
        }
        
    }
    while(i<m){
        arr3[k++]=arr1[i++];
    }
    while(j<n){
        arr2[k++]=arr2[j++];
    }

    
}
void print(int arr3[],int n){
    for(int i=0; i<n; i++){
    cout<<arr3[i];
    }
}
int main(){
    int arr1[5]={2,3,4,5,6};
    int m=5;

    int arr2[3]={4,7,8};
    int n=3;
    int arr3[8]={0};

    MergeArray(arr1,m,arr2,n);
    print(arr3,8);
}*/

//move zeroes from left to right 

void formate(int arr[], int n){

    int nonZero=0; 
    int e=n;


        for(int i=0; i<e; i++){
            if(arr[i] !=0){
                swap(arr[i],arr[nonZero]);
                nonZero++;

            }
        }
    }

    void PrintArray(int arr[], int n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    }


int main(){
    int arr[5]={0,0,4,0,7}; 
    int n=5;
    formate(arr,n);
   for(int i=0; i<n;i++){
    cout<<arr[i]<<" ";
   }



}