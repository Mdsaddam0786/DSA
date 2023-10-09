#include<iostream>
#include<string>
#include<vector>
using namespace std;

// question remove spaces and put @40 
string rePlaceSpace(string str){
     string temp=" ";
    
    for(int i=0; i<str.length();i++){
        if(str[i]==' '){
            str.push_back('@');
            str.push_back('4');
            str.push_back('0');
           
        }
        else{
            str.push_back(str[i]);
        }
    }
    cout<< str;
}

int main(){
    string str="md saddam";

    cout<<rePlaceSpace(str)<<endl;
    
    
}/*
char maxOccCharacter(string str){
    int arr[26]={0}; 

    for(int i=0; i<=str.length();i++){
        
        char ch=str[i];
        int number=0;
        if(ch>='a' && ch<='z'){
            number=ch-'a';

        }
        else{
            number=ch-'A';

        }
        arr[number]++;
    }
    int maxi=-1;
    int ans=0;

    for(int i=0; i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }

   return ans + 'a';
}


int main(){
    string s;
    cout<<"Enter name"<<endl;
    cin>>s;

   cout<< maxOccCharacter(s);
}*/