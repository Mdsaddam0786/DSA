#include<iostream>
#include<math.h>
using namespace std;


 int main(){ 
 /* 
 
//  decimal to binary
   int n;
    cout<<"Enter the number";
    cin>>n;
    int ans=0;
    int i=0;

    while(n !=0){  
        int bit= n & 1;             //yah line n ke binary se ek ek karke & karata hai   
         
          ans=(bit *  pow(10,i))+ans;
            n = n >>  1 ;          //yah line n ko ek bit increament kar deta hai
          i++;                       //yah i ko increament karta hai
         
    }
    cout<<"binary number is "<<ans<<endl;
    } 
    //binary to decimal  
  int i=0;
    int n;
    int ans=0;
    cout<<"Enter the number";
    cin>>n;

    while(n !=0){
        int digit=n%10;
        if(digit==1){
            ans=ans +pow(2,i);

        }
        n=n/10;
        i++;
    }
    cout<<ans;
    }*/
      // numbe possitive hai ya negative hai yah batana
   /**/  int n;
    cout<<"Enter a number ";
    cin>>n;

  
    
     while(n !=0){
        int bit =n&1;
        if(bit==0){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
        break;
     }
     
}

