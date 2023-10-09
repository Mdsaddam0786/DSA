#include<iostream>
using namespace std;
  /*ek phrase hai jisme se sabhi non-alphanumeric character hata de or saare upper letter lower letter bana de to wah palidrome ban jayega
  ex-
  a man a plan; acanal:panama,
   
    3.palidrome check*/
        
   bool valid(char ch){
  
  if( (ch>='a' && ch<='z' )|| (ch >='A' && ch<='Z' )||(ch >= '0' && ch<= '9')){
    return 1;
  }
  else{
    return 0 ;
  }
        
    }
//2. upper case to lower case
    char toLowercase(char ch){
    if((ch>='a' && ch<='z')){
        return ch;
    }
    else{
        char temp= ch - 'A' +'a';
        return temp;
    }
 }
 // 1.faltu character hata de
 bool checkPalidrome(string a){
    int s=0;
    int e=a.size()-1;
    

    while(s<=e){
        if(a[s++] !=a[e--]){
        return 0;
        }
        
    }
    return 1;

 }
    

  bool isPalidrome(string s){
    string temp="";
    
    for(int i=0; i<=s.size()-1; i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }

    for(int i=0; i<=temp.size()-1; i++){

        temp[i]=toLowercase(temp[i]);
    }
    int yes= checkPalidrome(temp);

    if( yes==0 ){
        return 0;
    }


    return 1;




}

    
    
int main(){
    
    string str="b man a plan; acanal:panamb";
    cout<<isPalidrome(str);

}/*
char reverse(char str[],int n){
    int s=0; 
    int e=n-1;
    while(s<=e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
}

void ReverseWord(string str){
    int s=0; 
    int e=str.size()-1;
    string spa=" ";

}
       

int main(){

    string str="myname";
    
   int size=str.size();
      reverse(str,size);
    
    cout<<str;
    
    

}*/