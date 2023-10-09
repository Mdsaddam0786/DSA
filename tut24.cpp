#include<iostream>
#include<vector>
using namespace std;
// sieve of eratosthenes algorithm
/*

int countPrimeNum(int n){
    vector<bool>prime(n+1,true);  //ek vecotr bana kar sabhi element ko prime bana dena hai
   int cnt=0;
    prime[0]=prime[1]=false;   //1 or 2 ko no non-prime declare kar dena hai pehle 
    for(int i=2; i<n; i++){
        if(prime[i]){
            cnt++;
            for(int j=2*i; j<n; j=j+i){  // i ke table me jitne number aa rahe hain un sabko non-prime declare kar dena 
                 prime[j]=0;
            }
        }
    }
    return cnt;
}




int main(){
    int n= 3;

cout<<countPrimeNum(n);
}

// find gcd by iterative method 
  int FindGcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a !=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
  }

int main(){

    int a=72;
    int b=24;
    cout<<FindGcd(12,36);
}*/

int Power(int x,int n,int m){
    int result=1;
    while(n>0){
        if(n&1){
     
     result=(1LL*(result)*(x)%m)%m;


        }
        x=(1LL*(x)%m*(x)%m)%m;
        n=n>>1;

    }
    return result;
}

int main(){
    int x=2;
    int m=5;
    int n=2;

    
    cout<<Power(x,n,m);
}