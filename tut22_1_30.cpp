#include<iostream>
#include<vector>
#include<array>
#include<string>
using namespace std;

//check karna hai hai ke pehla string ka koi bhi
 //combination(permutation) dusra string me hai
 // ya nahi hai to true nahi to false

  bool checkEqual(int count1[26],int count2[26]){
    for(int i=0; i<26; i++){
        if(count1[i] !=count2[i]){
            return 0;
        }
    }
    return 1;

  }
  bool checkPermutaion(string s1,string s2){
    // sabse pehle count store s1 ka
    int count1[26]={0};
    for(int i=0;  i<s1.length(); i++){
        int index= s1[i] -'a';
        count1[index]++;

    }
    // traverse s2 in window form length of this window is s1 string

    int count2[26]={0};
    int windowSize=s1.length();
    int i=0;
    while(i<windowSize && i<s2.length()){
        int index=s2[i]-'a';
        count2[index]++;
        i++;
    }
    // yahan tak dono ka count store ho gaya ab compare karenge;

    if(checkEqual(count1,count2)){
         return 1;
             }
    // nahi hua to aage proocess karega 
    
    while(i<s2.length()){
        // yaha naya char add karna hai s2 ke window me
        char newChar=s2[i];
        int newindex=newChar-'a';
        count2[newindex]++;
     // yaha naya char add karna hai s2 ke window me
       
       char oldChar=s2[i-windowSize];
        int oldindex=oldChar-'a';
       count2[oldindex]--;
       i++;

    

    if(checkEqual(count1,count2)){
          return 1;
              }
    }
     return 0;    


  }

int main(){
    string s1;
    cout<<"Enter the 1st string "<<endl;
    cin>>s1;
    
cout<<endl;
 string s2;
 cout<<"Enter 2nd string"<<endl;
   
cin>>s2;

    cout<<checkPermutaion(s1,s2);

}


// question:find number of union values in two arrays
// geekforgeek
/*
 int doUnion(int a[], int n, int b[], int m) {
        
   sort(a,a+n);
   sort(b,b+m);
   
   
   
   
   int i=0;
   int j=0;
   int count=0;
   
   
   while(i<n && j<m){
       
       if(a[i]<b[j]){
           i++;
       }
       
       else if(a[i]>b[j]){
           
           j++;
        }
        
        
        else if(a[i]==b[j]){
            i++;
            j++;
        }
        
        count++;
   

    }
    
    //b wala arrary kahtam ho gaya
    
    while(i<n){
        i++;
        count++;
    }
    
    while(j<m){
        j++;
        count++;
    }
    
    
    
    
    
    return count;
    
    }
    
    
    */
    
    
    