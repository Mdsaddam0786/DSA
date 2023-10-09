#include<iostream>
#include<vector>
using namespace std;

int FindDubliCate(int arr[], int n){
    int s=0;
    int e=n-1;
    vector<int>temp;
  for(int i=0; i<=e; i++){
    for(int j=i+1; j<=e; j++){
        if(arr[i]==arr[j]){
            temp.push_back(arr[j]);
        
        }
    }
        break;
  }

  for(int i:temp){
    cout<<i;
  }
        
    }





int main(){
    int arr[5]={2,3,6,3,1};
    int n=5;
   cout<<FindDubliCate(arr,n);


}