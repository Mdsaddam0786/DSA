#include <iostream>
#include <limits.h>
#include<math.h>
using namespace std;
// sum of the element in the array
/*int main(){
    int arr[]={23,4,1,6,4};
    int n=5;

    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    cout<<"sum of elements of the array"<<sum<<endl;
}

/*int main(){
    int n=8;
    int ans =1;
   for(int i=0; i<30; i++){

   ans=ans* 2;
   

   if(ans==n){
    cout<<true;
   }
   else{
    cout<<false;
   }
   break ;
   }

}

// array me se msximum or minimum number find karne ke liye function
/* 
int getMax(int num[] ,int n){
    int max= INT_MIN;

    for(int i=0; i<n; i++){
        if(num[i]> max){

            max=num[i];
        }
        
    }
    return max;
}

int getMin(int num[] ,int n){
    int min= INT_MAX;

    for(int i=0; i<n; i++){
        if(num[i]< min){

            min=num[i];
        }
        
    }
    return min;
}

int main(){


    int size;
    cin>>size;
    int num[100];


    for(int i=0; i<size; i++){
        cin>>num[i];
        
    }

    cout<<" maximum number is "<< getMax(num,size)<<endl;
    cout<<" minimum number is "<< getMin(num,size)<<endl;


  return 0;
    

}

//   search key value in an array
bool linearsearch( int arr[], int size, int key){

    for(int i=0; i<=size; i++){
        if(arr[i]==key){
            return 1;
        }
            }
         return 0;
}

int main(){
    cout<<"Enter the size of array";
    int size;
    cin>>size;

    cout<<"Enter the key";
    int key;
    cin>>key;
    cout<<"Enter the array";
    int arr[100];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
   bool found= linearsearch(arr,size,key);

   if( found){
    cout<<"key is present ";
   }
   else{
    cout<<"key is absent";
   }} */

//    array ko reverse karaye
    void reverse(int arr [], int n){
        int start=0;
        int end=n-1;

       
       while(start<=end){
        swap(arr[start],arr[end]);
        start ++;
        end--;
       }



    }
   

   void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
      
      cout<<arr[i]<<" ";
    }
    cout<<endl;
   }


   int main(){

    int arr[6]={23,21,56,78,34,78};
    reverse(arr,6);
     printArray(arr,6);
  
    
    
   }

