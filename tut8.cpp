#include<iostream>
using namespace std;
//function for power
int power(int a ,int c){
    int ans=1;
    for(int i=1; i<=c; i++){

        ans =ans*a;

        

    }
    return ans;

}
int main(){
    int a,b;
    cout<<"Enter the number";
    cin>>a;
    cout<<"Enter the power";
    cin>>b;
    cout<<power(a,b); 

    
}