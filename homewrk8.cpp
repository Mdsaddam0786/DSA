#include <iostream>
using namespace std;




int main(){
// fibonacci sereis
int n;
cout<<"Enter a number";
cin>>n;
int a=0;
int b=1;
int sum=0;


cout<<a <<" "<<b;

for(int i=1; i<=n; i++){
    sum=a+b;
    a=b; 
    b=sum;
    cout<<sum<<" ";
    }
    }
/*

    int sum(int arr[], int n){

        int sum=0;
        for(int i=0; i<n; i++){
            sum=sum+arr[i];
        }
        return sum;
    }

    int main(){
        // int arr[]={34,56,7,46,33,23};

        cout<<"Enter the size of array";
        int size;
        cin>>size;
        cout<<"Enter the array";
        int arr[100];
        for(int i=0; i<size; i++){
            cin>>arr[i];
        }*/


     

    cout<< "sum of all element of an array is "<<sum(arr, size);
    }