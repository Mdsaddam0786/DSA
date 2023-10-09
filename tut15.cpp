#include<iostream>
using namespace std;

// Book allocation problem
/*ek n elements ka array diya hai jo kisi book ka page denote karta hai
m number students hain 
question statements
1.har ek page ko distribute kar dena hai 
2.sabhi students ko atleast 1 page milna chahiye 
3.contigous manner me page distribute karna hai
4.maximum number of page assigned to minimum students*/
bool isPossible(int arr[],int n,int m,int mid){
    int studentCount =1;
    int pageSum=0;

    for(int i=0; i<n; i++){
        if(pageSum+arr[i]<=mid){
            pageSum +=arr[i];

        }
        else{
            studentCount++;
            if(studentCount > m || arr[i]>mid){
                return false;
                 }
                pageSum=arr[i];
        }

    }

        return true;
    }




int allocate(int arr[],int n,int m){
    int s=0;
    int sum=0;

    for(int i=0; i<n; i++){
        sum +=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;

        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    cout<<"Enter the number of page packets"<<endl;
    int n;
    cin>>n;
cout<<"Enter the pages packets which we have to allocate to the students"<<endl;
    int arr[100];
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of students "<<endl;
    int m;
    cin>>m;
    

    cout<<"your answer is "<<allocate(arr,n,m);
}
/*
paint karne ke liye board diya hai
2 painter hai
dono painter ko board provide karna hai countigous manner me
such that provide karna ke minimum time lage


bool IsPossible(int arr[],int n,int m, int mid){
int PainterCount=1;  
int TotalBoard=0;
  for(int i=0; i<n; i++){
  if(TotalBoard+arr[i]<=mid){
    TotalBoard +=arr[i];
    
  }
  else{
    PainterCount ++;
    if(PainterCount>m || arr[i]>mid){
         return false;
    }
     TotalBoard=arr[i];
  }
  }
  return true;


}

int BoardAllocate(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0; i<n; i++){
        sum +=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    
    int ans=0;

    while(s<=e){
        if(IsPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
           
            
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[4]={5,5,5,5};
    int n=4;
    int m=2;

    cout<<BoardAllocate(arr,n,m);

}*/

// ek arrray hai jo jiske elements cows ke bandhne ke jgh ko indicate karta hai




