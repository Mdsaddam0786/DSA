#include<iostream>
using namespace std;

void ReverseArray(int arr[],int n){

int s=0;
int e=n-1;

while(s<=e){
    swap(arr[s],arr[e]);
        s++;
        e--;
    
}




}
void Print(int arr[],int s){
    for(int i=0; i<s; i++){
        cout<<arr[i]<<" ";
    }
}



int main(){
int arr[5]={3,5,6,3,7};
ReverseArray(arr,5);
Print(arr,5);





}