#include<iostream>
using namespace std;
// double pointer 

updateValue(int **p2){
    // // update in address
    // p2=p2+1;
    // cout<< p2<<endl;
    // //update in value
    **p2=**p2+1;
    cout<<**p2<<endl;
}


int main(){
    int i=5;
    int *p=&i;
    int **p2=&p;
    cout<<"value of i is  "<<i<<endl;
    cout<<"value of i is   "<<*p<<endl;
    cout<<"value of i by  p2 is  "<<**p2<<endl;
    cout<<"without update "<<p2<<endl;
   cout<<"after update ";
    updateValue(p2);


}