#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// 2D arrays;

// function for searching target
/**/
bool isPresent(int &arr,int target,int m,int n){
    for(int i=0; i<m;i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

  int main(){

    int arr[3][3]={{2,3,5},
                  {4,8,9},
                  {1,3,5}};
     

     isPresent(arr,3,3);

  }




    /*
void sumOfArrauY(int arr[3][3],int n,int m){
    for(int i=0; i<n; i++){
         int sum=0;
        for(int j=0; j<m; j++){
            sum +=arr[i][j];  //i j ka place change kar denge to cloumn wise sum nikal jayega
            
        }
        cout<<sum<<" ";
    }
}

int larGestrowsum(int arr[][3],int n,int m){
    int maxi=INT_MIN;
   int maxrowIndex=-1;
     for(int i=0; i<n; i++){
         int sum=0;
        for(int j=0; j<m; j++){
            sum +=arr[i][j];  //i j ka place change kar denge to cloumn wise sum nikal jayega
            
        }
        
        if(sum>maxi){
        maxi=sum;
     maxrowIndex++;



    }
    }
    cout<<"the maximum sum is "<<maxi<<endl;
    
    return maxrowIndex;
}



int main(){
    
    // 2D array creation
    int arr[3][3];
//   row wise aise le sakte hain input
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j]; //i j ko exchange karke column wise le
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0;j<3; j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }

    // dusra tarika
    int arr[3][4]={{1,2,3,4},{5,6,7,7},{8,10,11,12}};
    
    for(int i=0; i<3; i++){
        for(int j=0;j<4; j++){
            cout<<arr[i][j]<<" ";
        }

        }
        cout<<endl;

}
/*
        // search the target element in 2D array by a function
            int arr[][3]={{1,2,3}
                          ,{5,6,71},
                           {8,10,11}};

        if(isPresent(arr,15,3,3)){
            cout<<"found";

        }
        else{
            cout<<"not found";
        }
        //  sumOfArrauY(arr,3,3);
         cout<<larGestrowsum(arr,3,3);





    }*/
