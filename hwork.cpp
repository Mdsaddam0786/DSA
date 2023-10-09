#include<iostream>
using namespace std;


int main(){
    int n;
    int prod=1;
    int sum=0;
    cout<<"Enter the number";
    cin>>n;
    while(n!=0){
        int digit=n%10;
        prod=prod*digit;
        sum=sum+digit;
        n=n/10;



    }
    int answer=prod-sum;
    return answer;
    cout<<answer;

}

