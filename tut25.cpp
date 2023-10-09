#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
// pointers:pointer ek variabl hota hai jo kisi value ke address store karta hai 

int main(){
    int a=5;
    int *ptr=&a;
    double b=6;
    double *p2=&b;
    //agar p ke value se pehle *p to address store karega or address me *lagane par firse value store karega

    cout<<"value of a "<<a<<endl;
    cout<<"address of a "<<ptr<<endl;
    cout<<"size of a "<<sizeof(a)<<endl;  //kisi bhi integer value ka size 4 hota hai
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;//kisi pointer ka size bhi 4 hi hota hai
    cout<<"size of pointer "<<sizeof(p2)<<endl;
    (*ptr)++;
    cout<<" value after increse "<<a<<endl;
// copieng the address from 1st pointer to another pointer 
int c=5;
 int *ptr2=&c;

int *qtr =  &(*ptr2);
cout<<(*qtr)<<endl;
//complete
 int *t=&c;
 t=t+1;
 cout<<*t;

}



