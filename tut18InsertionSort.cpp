#include<iostream>
using namespace std;
/* InsertionSort
1st element ko sorted man lenge or i=1 karke compare karayenge to 
agaar next element chhota hoga to i-1 element ko isse compare karayenge 
agar isse bada hoga to beech me place  kr denge is value ko



void InsertionSort(int arr[], int n){

    for(int i=1; i<n; i++){
        int temp=arr[i];

        int j=i-1;
        for(; j>=0; j--){

            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break ;
            }
        }
        arr[j+1]=temp;
    }
}
void PrintArray(int arr[], int n){
    for(int i=0; i<n ; i++){

        cout<<arr[i];
    }
}
int main(){
    int arr[4]={1,5,4,3};

    int n=4;
    InsertionSort(arr,n);
    PrintArray(arr,n);
    
}*/

void merge(int arr1[], int n , int arr2[], int m, int arr3[]){
    
}