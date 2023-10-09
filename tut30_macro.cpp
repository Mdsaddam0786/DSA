#include<iostream>
using namespace std;
// macros : yah koi variable nahi hai 
//yah value replace kar deta hai
   #define PI 2.5
//Global variable or local variable khud se padh le

int main(){
    int r=5;
    int area=PI*r*r;
    cout<<area;
}
//tertoiry method
//inline function:ek function hoga jo compile hone se prhle program me vlaue de deti hai 
//inline koi function tabhi banega jab function ki body single line ki  ho

inline int getMax(int& a,int& b){
    return (a>b) ? a:b;

}
int main(){
    int a=1,b=2;
    int ans=0;
    ans=getMax(a,b);
    cout<<ans<<endl;
    a=a+3;
    b=b+1;
    ans=getMax(a,b);
    cout<<ans<<endl;
}/*
// default arguments
// yahan function me arguments optional hai value dega to wo nahi to 0 se start kar degga
//hamesha rightmost value ko pehle initialicw karna hoga
int printArray(int arr[],int size,int start=0){
    for(int i=start; i<size; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<printArray(arr,5,2);


}*/
