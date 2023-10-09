#include<iostream>
using namespace std;
//Recursion: function calls its self  by book definition
//Recursion: agar kisi problem ka solution kisi dusre problem par depend karta hai to use Recursion karta hai by babbar
//isme 2 chiz compulsory hoti hai recursive relation or base condition
   //for printiing factorial
  /* 
  int factorial(int n){

    // base case
    if(n==0){
        return 1;
    }

    int ans=n*factorial(n-1);

    return ans;
  }

int main(){
    int n=5;
    cout<<factorial(n); 

}
*/
//for printing count of any number

 void CountPrint(int n){
    // base condition
    if(n==0){
        return ;
    }
   
   CountPrint(n-1);
   
    cout<<n;
   cout<<endl;

 }

int main(){
    int n=5;
  CountPrint(n);
}