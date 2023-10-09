#include<iostream>
#include<string>
using namespace std;

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


int main(){
     char name[6]="saddam";

     reverse(name,6);
     printString(name,6);


}

