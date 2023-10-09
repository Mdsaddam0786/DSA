 #include<iostream>
 using namespace std;

 char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch - 'A' +'a';
        return temp;
    }
 }

 bool checkPalidrome(char name[],int n){
    int s=0;
    int e=n-1;
    

    while(s<=e){
        if(toLowercase(name[s++]) !=toLowercase(name[e--])){
        return 0;
        }
        
    }
    return 1;

 }


 void reverse(char name[], int n){
    int s=0;
    int e=n-1;

    while(s<=e){
     
     swap(name[s],name[e]);
     s++;
     e--;

     
    }

 }

 int getLength(char name[]){
    int count=0;
    int s=0;
    int i=0;
    while(name[i] !='\0'){
        count++;
        i++;
    }
    

   
    return count;

    
 }

 int main(){
    char name [6];
    cout<<"Enter name";
    cin>>name;
    cout<<endl;
   // cout<<"name is "<<name;
    
    int len=getLength(name);
    cout<<len<<endl;

    reverse(name,len);
    cout<<"reversed name is "<<name<<endl;
    
    cout<<" name is palidrome or not "<<checkPalidrome(name,len); 

    
   
 }
