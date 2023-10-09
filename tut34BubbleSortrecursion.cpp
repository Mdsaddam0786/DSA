#include<iostream>
#include<string>
using namespace std;
/*
void ReverseString(string &str,int s,int e){


    //base case
    if(s>=e){
        return;
    }
    swap(str[s],str[e]);
    
   s++;
   e--;
    ReverseString(str,s,e);

}

int main(){
    string str="saddam";
    int s=0;
    int e=6;

    ReverseString(str,s,e-1);
    cout<<str;

}
bool CheckPalidrome(string str,int s,int e){

    //bse case
    if(s>e){
        return true;
    }

    if(str[s] !=str[e]){
        return false;
    }
    else{
        CheckPalidrome(str,s+1,e-1);
    }
}
int main(){
    string str="bookkoob";
    int size=8;

    int ans=CheckPalidrome(str,0,size-1);

    if(ans){
        cout<<"yes it is palidrome ";
    }
    else{
        cout<<"it is not palidrome";
    }

}

 int Power(int a,int b){

    //base case
    if(b==0){
        return 1;

    }
    if(b==1){
        return a;
    }

    int ans=Power(a,b/2);

    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }

 }

int main(){
    cout<<"Enter the base and then space then power ";
    int a,b;
    cin>>a>>b;

    cout<<Power(a,b);
}
*/
// sort the array by buble sort

 void SortArray(int *arr,int e){

  //base case
  if(e==1){
    return ;
  }


  for(int i=0; i<e-1;i++){ //array se bahar nikal jata e tak chalata to
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }

  }
  SortArray(arr,e-1);

 }
int main(){
    int arr[6]={2,5,7,1,3,8};
    int e=6;

    SortArray(arr,e);

    for(int i=0; i<e; i++){
        cout<<arr[i];
    }
    
}