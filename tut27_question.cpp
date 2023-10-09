#include<iostream>
using namespace std;
increament(int **p){
    ++(**p);
}

int main(){
    //mcq question 1
  /*  int first =8;
    int second=18;
    int *ptr=&second;
        *ptr=9;
    cout<<first<<" "<<second<<endl;

// question 2
int first=8;
int *p=&first;
cout<<(*p)++<< " "; //pehle increament kiya fira valure badha diya 
cout<<first<<endl;

// question 3 segment error aayega 
int *p=0;
int first=110;
*p=first;  //agar first se pehle & laga de to nahi aayega
cout<<*p<<endl;


// question 4
int first =8;
int second=11;
int *third=&second;
first=*third;
*third=*third+2;
cout<<first<<" "<<second<<endl;
// question 5
float f=12.5;
float p=21.5;
float* ptr=&f;
(ptr)++;
*ptr=p;
cout<<*ptr<<" "<<f<<" " <<p<<endl;
// questuion 6
int arr[5];
int *ptr;
cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;


// question 7
int arr[]={11,21,13,14};
cout<<*(arr)<<" "<<*(arr+1)<<endl;

//question8
int arr[6]={11,12,31};
cout<<arr<<" "<<&arr<<endl;


//question 9
int arr[3]={11,21,13};
cout<<(arr+1)<<endl;

//question 10;
int arr[6]={11,21,31};
int *p=arr;
cout<<p[2]<<endl;

//question 11
int arr[]={11,12,13,14,15};
cout<<*(arr)<<" "<<*(arr+3);

//question 12
int arr[]={11,21,31,41};
int *ptr=arr++;
cout<<*ptr<<endl;


//question 13
char ch='a';
char* ptr=&ch;
ch++;
cout<<*ptr<<endl;

//question 14
char arr[]="abcde";
char *p=&arr[0];
cout<<p<<endl;

//question 15
char arr[]="abcde";
char *p=&arr[0];
p++;
cout<<p<<endl;

//question 16
char str[]="saddam";
char *p=str;
cout<<str[0]<<" "<<p[0]<<endl;

//double pointer 
//question 1
int first=110;
int *p=&first;
int **q=&p;
int second=(**q)++  +9; //pehle print kiya fir increament kiya
cout<<first<<" "<<second<<endl;

//question 2

int first=100;
int *p=&first;
int **q=&p;
int second=++(**q);
int *r=*q;
++(*r);
cout<<first<<" "<<second<< endl;*/

//question 3 function bana
int num=110;
int *ptr=&num;
increament(&ptr);
cout<<num<<endl;

}