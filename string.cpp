#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*
void reverse(char name[], int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        swap(name[s++],name[e--]);

    }

}
void printString(char ch[],int n){
for(char i=0;i<n;i++){
    cout<<ch[i];
}
}
*/
//question leet code weekly chalange
// ek string hai:jisme agar koi "i " character milta hai 
// to piche wale saare string ke characters ko
// reverse kar dega or i ko ignore karke aage padh jayega 
// output me updated string dega
// example:optimise
// output:moptse
// explanation:1 "i" aya to "tpo" ho gaya
//  2nd "i" aya to "mopt" fir i ignore hoga 
//  output:moptze

string kharabKeyboard(string s){

    string str="";

    for(int i=0; i<s.length(); i++){

        if(s[i]=='i'){
            reverse(str.begin(),str.end());
        }
        else{
            str=str+s[i];
        }

    }

    return str;
}




int main(){
    //  char name[6]="saddam";

    //  reverse(name,6);
    //  printString(name,6);

    string str="optimize";
    cout<<kharabKeyboard(str);



}

