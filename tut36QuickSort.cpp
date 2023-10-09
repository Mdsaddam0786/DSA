#include<iostream>
using namespace std;
int Partition(int *arr,int s,int e){
//sabse pehle ek pivot element bana le 1st element ko
    int Pivot=arr[s];
    int cnt=0;
    // pivot se kitne chhote element hai 
    for(int i=s+1; i<=e; i++){
        if(Pivot>=arr[i]){
           cnt++;
        }    
    }
    // pivot  ko sahi index par bhej
    int PivotIndex=s+cnt;
    swap(arr[s],arr[PivotIndex]);
    // left and right wale part ko sambhal lete hain
    int i=s; int j=e;
    while(i<PivotIndex && j>PivotIndex){
        while(arr[i]<arr[PivotIndex]){
            i++;
        }
        while(arr[j]>arr[PivotIndex]){
            j--;
        }
       
            if(i<PivotIndex && j>PivotIndex){
                swap(arr[i++],arr[j--]);
            }
        
    }
   return PivotIndex;
}

void QuickSort(int *arr,int s,int e){

    //base case
    if(s>=e){
        return;
    }
    int p=Partition(arr,s,e);
    // for left part ko sort karne ke liye
    QuickSort(arr,s,p-1);
    // for right part ko sort karne ke liye
    QuickSort(arr,p+1,e);


}

int main(){
    int arr[8]={14,23,12,15,61,18,10,11};
    int e=8;

    QuickSort(arr,0,e-1);
    for(int i=0; i<e; i++){
        cout<<arr[i]<<" "; 
    }
}