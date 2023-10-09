#include<iostream>
using namespace std;



/*
//peak element find karna hai
int FindPeak(int arr[],int size) {
    int s=0;
    int end=size-1;
    int mid=s+(end-s)/2;

    while(s<end){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        
        else{    
            end= mid;
        }
        mid=s+(end-s)/2;
    }
    return s;
}
int main(){
    int arr[8]={1,2,9,2,3,4,5,6};
    cout<<"answer is "<<endl;
   
    cout<<FindPeak(arr,8);
}
*/
// pivot element find karna hai rotated  array me se
//pivot means minnimum ya maximum

int pivotFind(int arr[], int size){
    
    int s=0;
    int end=size-1;
    int mid=s+(end-s)/2;
    while(s<end){
        if(arr[0]<=arr[mid]){
            s=mid+1;
        }
        else{
            end=mid;
        }
        mid=s+(end-s)/2;

    }
    return end;
}
int main(){
int arr[8]={7,9,11,12,13,3,4,5};

cout<<pivotFind(arr,8);   
}
/*
// ek rotated array me se key value find karna hai
// 1.binary search ka function likhenge 
// 2.find pivot ka ek function likhenge 

int BinarySearch(int arr[], int s, int e, int key){

    int start=s;
    int end=e;
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



int pivotFind(int arr[], int size){
    
    int s=0;
    int end=size-1;
    int mid=s+(end-s)/2;
    while(s<end){
        if(arr[0]<=arr[mid]){
            s=mid+1;
        }
        else{
            end=mid;
        }
        mid=s+(end-s)/2;

    }
    return end;
}


  


int main(){
    int key=1;
     int arr[6]={7,8,9,10,1,2};
     int size=6;
     int start=0;

        int YourKey=7;
        int pivot=pivotFind(arr,6);

  

    if(key>=arr[pivot] && key<=arr[size-1]){       //check karenge ke kis line me key lie karta hai
        YourKey=BinarySearch(arr,pivot,size-1 ,key); //fir usi line me binery search laga ke value find kar
    }
    else {
        YourKey=BinarySearch(arr,start,pivot-1,key);

    }
    cout<<YourKey;
 }
 /*
long long int BinarySearch(int n){
    int s=0;
    long long int e=n;
    long long int mid=s+(e-s)/2;
    long long  int ans=-1;

    while(s<=e){
       long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            
            e=mid-1;
        }
        mid =s+(e-s)/2;
    }
    return ans;
}

double moreProcesion(int n,int procesion,int tempSol){
    double factor=1;
    double ans=tempSol;
    for(int i=0; i<procesion; i++){
        factor=factor/10;
        for(double j=ans; j*j<n; j=j+factor){
            ans= j;
        }
    }
    return ans;

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
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    
   int tempSol=BinarySearch(n);
   cout<<"Squareroot of the number "<< n << " is " <<moreProcesion(n,3,tempSol);
}
*/