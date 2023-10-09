#include<iostream>
#include<set>
using namespace std;

int main(){

    // set str
    /* is str me duplicate element nahi ho sakte hain*/

    set<int>s;
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(3);
    s.insert(1);
    s.insert(2);
    s.insert(0);
  // printing set str
    for(auto i:s){
        cout<<i<<endl;

    }
   cout<<endl;

// starting ka element delete karne ke liye 
set<int> ::iterator it=s.begin();  //1st element ko it me store karne ka tarika
it++;  //ye karke hum dusre position par aa gaye 
s.erase(it);  //ab yah dusre position ko erase kar dega 
//ab firse print karte hain set str ko
for(auto i:s){
    cout<<i<<endl;
}

//element hai present hai ki nahi yah dekhne ke liye 
cout<<"-5 present hai or absent hai "<<s.count(-5)<<endl;

set<int> ::iterator itr=s.find(2); //2 address ko identify kiya

for(auto it=itr; it !=s.end(); it++){//2 ke address ke aage jitne v element hai unko print krwa dega 
  cout<<*it<<" ";
}  cout<<endl;
}
