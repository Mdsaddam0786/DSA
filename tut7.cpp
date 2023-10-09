#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int reversed(int x){
int ans=0;

    while(x !=0){
    int digit=x%10;         // kisi number ka  10 se devide karne par  reminder return karega 
    
    if((ans > INT_MAX) || (ans<INT_MIN)){     
        return 0;
    }
   ans=(ans*10)+digit;
    x=x/10;
    
    }

 return ans;
}

int main(){
    int n;
    cout<<" Enter a number which you want to reversed";
    cin>>n;
    cout<<reversed(n);



}/*
// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.
// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement.

int compliment(int n){
  int m=n;
  int mask=0;
  if(m==0){
    return 1;
  }
    
   while(m!=0){
      mask =(mask <<1 ) | 1;
      m>>1;

   }
   int ans=(~n)&mask;
   return ans;
   

 }
 int main(){
  cout <<"your compliment number is ";
  cout<<compliment(2);
 }*/



 