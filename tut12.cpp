#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){

    int s=0;
    int end=size-1;
    int mid=s+(end-s)/2;

    while(s<=end){

        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
      if(arr[mid]<key){
            s=mid+1;
        }

        mid=s+(end-s)/2;
    }
            return -1;

}

int main(){

    int pass=786;
    int i=0;
    while(i!=pass){
        
        cout<<"Enter the password : "<<endl;
        cin>>i;
        if(i==pass){
            cout<<"successfully log in !";
        }
        else{
        cout<<"sale pass galat hai jaahil "<<endl;
        }
    }
    cout<<endl;
    cout<<"Search your key value from a sorted array "<<endl;
    cout<<endl;




    int size;
    cout<<"Plese Enter the size of array"<<endl;
    cin>>size;
    int arr[10];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0; i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key value"<<endl;
    cin>>key;
    

    int index=BinarySearch(arr,10,key);

    cout<<"your search value  is present on the index of "<<index;
}