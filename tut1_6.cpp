#include<iostream>
#include<algorithm>
using namespace std;



void SelectedSort(int arr[], int n){
    for(int i=0; i<n-1; i++){

        int minValue=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minValue]){
                minValue=j;
            }
        swap(arr[minValue],arr[i]);
        }
    }
 
   



}
int PrintArray(int arr[],int n){

    for(int i=0; i<n-1; i++){
        cout<<arr[i];
    }
}

int main(){
    int n=5;
    int arr[5]={2,7,5,3,1};

  
    SelectedSort(arr, n);
    cout<<PrintArray(arr,n);

}
