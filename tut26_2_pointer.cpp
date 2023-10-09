#include<iostream>
using namespace std;

int printElement(int *p){
    cout<<"after increament address "<<p+1<<endl;
    cout<<"after increament value "<<*p+1<<endl;   
}

int PrintSum(int arr[],int size){
    // arr[]=*arr hota hai yah pura array nahi sirf array ka address pass karta hai
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int a=5;
  int *p=&a;
//   hum iske address ko function me pass karke ise print kara sakte hain
cout<<"befor increament address "<<p<<endl; //address same rahega hamesha 
cout<<"befor increament value "<<*p<<endl; // value badha sakte hain
     printElement(p);


    int arr[7]={1,2,3,4,5,8,9};
    // hum aadhe array ko pass karke uke elements ka sum nikal sakte hain

    // cout<<PrintSum(arr,5)<<endl;
    // cout<<PrintSum(arr+4,1); //4th element yani 3rd idex ke bad ke saare element ko print karta hai
}