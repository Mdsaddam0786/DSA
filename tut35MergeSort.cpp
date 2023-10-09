#include<iostream>
using namespace std;

 void merge(int *arr,int s,int e){
   
   int mid=s+(e-s)/2;

   int len1=mid-s+1;
   int len2=e-mid;

   int *first=new int[len1];
   int *second=new int[len2];

//    ab copy karte hain first array me left part wale ko
  int mainArrayindex=s;
  for(int i=0; i<len1; i++){
    first[i]=arr[mainArrayindex++];
  }
  //copy karo right wale part ko 
  mainArrayindex=mid+1;
  for(int i=0; i<len2; i++){
    second[i]=arr[mainArrayindex++];
  }

//   ab dono naye array first and second ko merge kardo 
  int index1=0;
  int index2=0;
   mainArrayindex=s;
  
//   jab dono array equal ho to
  while(index1<len1 && index2 < len2){

    if(first[index1]<second[index2]){
        arr[mainArrayindex++]=first[index1++];
     }
     else{
        arr[mainArrayindex++]=second[index2++];
     }
  }
//   jab first array chhota ho
  while(index1<len1){
    arr[mainArrayindex++]=first[index1++];
  }
//   jab second array chota ho
while(index2<len2){
    arr[mainArrayindex++]=second[index2++];
}
 }

 void MergeSort(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    //Base Case
    if(s>=e){     return ;
    }
    //leftpart ko sort kar
    MergeSort(arr,s,mid);
    // right part ko sort kar
    MergeSort(arr,mid+1,e);
    //ab dono ko merge kar
    merge(arr,s,e);
 }

int main(){
    int arr[10]={3,5,7,4,2,1,7,9,10,11};
    int s=0; 
    int e=10;

    MergeSort(arr,s,e-1);
    for(int i=0; i<e; i++){
        cout<<arr[i]<<" ";
    }
}