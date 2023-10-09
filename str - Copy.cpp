#include<iostream>
#include<list>
#include<array>
#include<stack>
#include<queue>
using namespace std;
int main(){
   /* array<int,4> a={3,4,6,7};
    int size=a.size();

    cout<<size;
    cout<<"array ke 2nd index par "<<a.at(2)<<" hai " <<endl;
    cout<<"array ka front element "<<a.front()<< " hai"<<endl;
    cout<<"array ka back element "<<a.back()<< " hai"<<endl;*/

  /*  list<int>a(5,  1); // list ki size 5 hai or 1 se initialize ki hui hai
    list<int>last(a);//last ek naya list hai jisme a ki saare element copy ho gye hain
    for(int i:last){
        cout<<i;
    }
    cout<<endl;

    list<int> l;
    cout<< "list ki capacity "<<l.capacity()<<" hai"<<endl;
    l.push_back(1);
    cout<<"iski capacity 1 ho gai "<<l.capacity()<<endl;

    l.push_back(2);
    cout<<"iski capacity 2 ho jayegi  "<<l.capacity()<<endl;
   l. push_back(3);
    cout<<"iski capacity 4 ho jayegi "<<l.capacity()<<endl; //jab array bhar jata hai to apni capcity dubble kar leta hai
    cout<< "first index par jo element hai use print karega "<<l.front()<<endl;
    l.pop_back();
    cout<< "pop karne ke baad capacity same rahegi "<<l.capacity()<<endl;
    cout<<"lekin ek last element 3 delete ho jayega ";
    for(int n:l){
        cout<<n;
    }*/



    
//  list str
   /* list<int>n(5,100);
    cout<<"printing n"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }  cout<<endl;
        list<int> l;
        l.push_back(1);
        l.push_back(2);
        for(int i:l){
            cout<<i<<" ";
        }
        cout<<endl;
        l.erase(l.begin());
        cout<<"after erase"<<endl;
        for(int i:l){
            cout<<i<<" ";

        }
        cout<<"size of list"<<l.size()<<endl;
    }*/

    // stack str
  /* stack<string>s;
    s.push("love");
    s.push("babbar");
    s.push("saddam");

    cout<<"Top Element -->"<<s.top()<<endl;
    s.pop();
    cout<<"Top Element--> "<<s.top()<<endl;
    cout<<"size of stack"<<s.size()<<endl;
    cout<<"Empty or not"<<s.empty()<<endl;
}*/

/*queue<string>q;
q.push("love");
q.push("babbar");
q.push("saddam");

cout<<"size of before pop"<<q.size()<<endl;
cout<<"first Element "<<q.front()<<endl;
q.pop();
cout<<"last element"<<q.back()<<endl;
cout<<"size after pop"<<q.size()<<endl;
}*/

/*max heap create hota hai aise
isme jab bhi print karenge wah max element dega
   */ priority_queue<int>maxi; 

/*    min heap creation
isme jabhi print karenge min element degaa
*/
priority_queue<int, vector<int>,greater<int>>mini;

maxi.push(2);
maxi.push(1);
maxi.push(5);
maxi.push(0);
maxi.push(4);
cout<<" size of the maxi "<<maxi.size()<<endl;
int n=maxi.size();
for(int i=0; i<n; i++){
    cout<<maxi.top()<<"    ";//top me max element hoga wahi print hoga
    maxi.pop();
}
cout<<endl;


mini.push(2);
mini.push(1);
mini.push(5);
mini.push(0);
mini.push(4);
cout<<"size of the mini "<<mini.size()<<endl;
int m=mini.size();
for(int i=0; i<m; i++){
    cout<<mini.top()<<" ";//top me min element hoga wahi print hoga
    mini.pop();
}
cout<<endl;

cout<<" khali hai kya bhai  "<<mini.empty();






}

