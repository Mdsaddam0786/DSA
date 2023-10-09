#include<iostream>
using namespace std;

void NmberReverse(int x){
  
    int ans=0;

    while(x!=0){

        int digit=x%10;

        ans=(ans*10)+digit;
        x=x/10;
    }
    cout<<ans;
    

}

int main(){

    cout<<"Enter the number "<<endl;
    int n;

    cin>>n;

    NmberReverse(n);



}