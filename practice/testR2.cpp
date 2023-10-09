#include<iostream>
using namespace std;
// 11
// 12
// 13
// 14
// 15
// 16
// 17
// 18
// 19
// 20
// 21
// 22

int  RepeateDigit(int n){

    string numStr=to_string(n);
    int cnt=0;


    for(int i=0; i<numStr.length(); i++){
        for(int j=i+1; j<numStr.length(); j++){
            if(numStr[i]==numStr[j]){
             return 1;
            }
           
        }
    }

    return 0;
}

int main(){

    int n1=100;
    int n2=200;
   int ans;
   int count=0;

while(n1<=n2){
    
    ans=RepeateDigit(n1);
    

    if(ans ==0){
        count++;
    }
   n1++;

}
cout<<count<<" numbers are of  not repeated digit  "<<endl;

}