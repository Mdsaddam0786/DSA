#include<iostream>
#include<string>
using namespace std;

string removePattern(string str,string pattern){


    while(str.length() !=0 && str.find(pattern)<str.length() ){
        str.erase(str.find(pattern),pattern.length());
    }
    return str;
}


int main(){

    
    cout<<"Enter the String";
    string str="";
    cin>>str;
    cout<<"Enter the pattern";
    string pattern="";
    cin>>pattern;
    
   
    cout<<"String after remove pattern "<< removePattern(str,pattern);
}