#include<iostream>
#include<vector>
using namespace std;

int  findmissing(vector<int>&v){
    int s=0;
    int e=v.size()-1;
    int i=0;

        vector<int>temp;
    while(s<=e){
        if(v[i+1]-v[i]>1){
            temp.push_back(v[i]+1);

        }
    }
    return temp;
  
    }



int main(){
    vector<int>v{1,2,3,4,6};
    cout<<findmissing(v);

}

