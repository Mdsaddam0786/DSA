#include<iostream>
#include<bits/stdc++.h>
using namespace std;



    private:
    int missingNum(vector<int>&arr, int n){
        for(int i=0; i<n; i++){
            if(arr[i]+1!=arr[i+1]){
                return arr[i]+1;
            }
        }
        return -1;
    }
    
public:
int repeatedNum(vector<int> arr, int n){
    for(int i=0; i<n; i++){
        if(arr[i]==arr[i+1]){
            return arr[i];
        }
    }
    return -1;
}

    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
         vector<int>ans;
        
        sort(arr.begin(),arr.end());
        
       ans.push_back(missingNum(arr,n)) ;
       ans.push_back(repeatedNum(arr,n));
    }


int main(){


vector<int>v{1,2,4,5,6,6};
int n=6;

findTwoElement(v,n);


}
// //prime number
// cout<<" Enter the number "<<endl;
// int n;
// cin>>n;
// bool IsPrime =1;



// for(int i=2; i<n; i++){
//     if(n%i==0){
        
//         IsPrime=0;
    
//     }
// }

// if(IsPrime){
//     cout<<"number is prime ";
// }
// else{
//     cout<<"number is not prime ";
// }*/

// //decimal to banary
  
//   cout<<" Enter the number "<<endl;
// int ans=0;
// int i=0;
// int n;
// cin>>n;

//   while(n!=0){

//     int bit=n&1;

//     ans=(bit* pow(10,i)) +ans;
//     n=n>>1;
//     i++;
    
//   }

//   cout<<ans;
// }
