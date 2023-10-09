#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"Enter the elements in vector";
    vector<int>a;
    int in;
    for(int i=0; i<5; i++){
          cin>>in;
          a.push_back(in);
    }

    cout<<"Your vector";
    for(int i:a){
        cout<<i;
    }
}
