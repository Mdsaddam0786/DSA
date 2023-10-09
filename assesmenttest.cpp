#include<iostream>
using namespace std;

int main(){
    string str;
cout<<"enter the string "<<endl;
    cin>>str;
   
 int i=0;
 int e=str.length();
 int count[26]={0};
    while(i<e){
        char temp=str[i];
        int index=temp-'a';
        count[index]++;
        i++;
    }
  int n=0;
    for(int i=0; i<26; i++){
        if(count[i]>1){
            n++;
        }
    }
    cout<<n;
}