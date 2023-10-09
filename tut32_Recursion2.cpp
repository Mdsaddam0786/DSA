#include<iostream>
#include<string>
using namespace std;
//source to destination
/*
void reachHome(int src,int dest){
    cout<<src <<" source "<<dest<<" destination "<<endl;
    //base condition
    if(src==dest){
        cout<<"pahunch gaya "<<endl;
        return;
    }
     
     src++;
    reachHome(src,dest);


}



int main(){
    int src=1;
    int dest=10;

    reachHome(src,dest);

}
*/
// fibonacci seireis number kis index par kya value  aayegi

/* int fibonacci(int n){
    //base case
    if(n==0){
       
        return 0;
    }
    if(n==1){
      
        return 1;
                     }

   int ans=fibonacci(n-1)+fibonacci(n-2);
   
   return ans;
    
 }

int main(){
  int n=2;
 cout<<fibonacci(n);
     
}
*/
void SayDigit(int n){
     string arr[10]={"zero","one","two","three","four","five","six",
                     "seven","eight","nine"};
    //base case
    if(n==0){
        return ;
    }
    int digit=n%10;
    n=n/10;
    
    SayDigit(n);
    cout<<arr[digit]<<" ";


}
int main(){
    int n;
    cout<<"Enter the numbers "<<endl;
    cin>>n;
   

        SayDigit(n);
}*/