#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// ek array ke 1st element ka value 2nd wale se change karna hai
// example:
// array={3,2,5,6,7,8,9}={2,3,6,5,8,7,9}

/*

void printArray(int arr[],int n){
  for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }   
  cout<<endl;
}
void swaping(int  arr[],int n){
    
 
   for( int i = 0;  i<n ; i+=2){
  if(i+1<=(n-1)){
  swap(arr[i], arr[i+1]);

  }
}
}

 
 
int main(){
    int arr[6];
    int n;
    cout<<"Enter the length of array"<<endl;
    cin>>n;
  cout<<" enter the elements of the array";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
    

    
 
    swaping(arr ,n);
    printArray(arr,n);
    
} 

// question-find the unique number from the arrays

int findUnique(int arr[], int n){
 int ans=0;
  for(int i=0; i<n; i++){
    ans=arr[i]^ans;
  }
  return ans;
}
int main(){
  int arr[5]={4,2,1,4,2};
  cout<<findUnique(arr,5);
}

vector<int>v;
 int arr[5]={2,5,6,4,2};

for(int i=0; i<5;i++){

  if(arr[i]==arr[i]+1){
    v.push_back(arr[i]);
    break;
  }
}
for(int j=0;j<v.size(); j++){
  cout<<v[j];
}

 
    
  /*int main(){
  vector<int>v;  // yahan ek vector declare kiya 
    int n=5; 
    int m=4;
    int arr1[5]={2,3,4,8,9};
    int arr2[4]={2,4,6,8}; 
    int i=0;
    int j=0;
    while(i<n && j<m){
      if(arr1[i]==arr2[j]){
        v.push_back(arr2[j]);
          i++;
          j++;

        }
        
        
        
         else if(arr1[i]<arr2[j]){
          i++;
        }
        else{
          j++;
        }
      }
     for(int i=0; i<v.size(); i++){
      cout<<v[i]<<" ";
     }
    };
  
   int main(){
       int arr[5]={2,1,3,4,7};
       int n=5;
     vector<int> ans;
    for(int i=0;i<n; i++){
      for(int j=i+1; j<n; j++){
        if(arr[i]+arr[j]==5){
         
          ans.push_back(min(arr[i],arr[j]));
          ans.push_back(max(arr[i],arr[j]));
          
        }
      }
    }
    for(int i=0; i<4; i++){
       cout<<ans[i]<<" ";
    }
    cout<<endl;
   

  }
/**/
  int main(){
  vector<int>v;  // yahan ek vector declare kiya 
    int n=5; 
    int m=4;
    int arr1[5]={2,3,4,8,9};
    int arr2[4]={2,4,6,8}; 
    int i=0;
    int j=0;
     for(int i=0; i<5; i++){

        v.push_back(arr1[i]);
     }
     
     for(int j=0; j<4; j++){

        v.push_back(arr2[j]);
     }
     
     for(int i=0; i<v.size(); i++){
      if(2==it){
        v.pop_back(it);
      
       
      }
      cout<<v[i];
     }

   
    while(i<n && j<m){
      if(arr1[i]==arr2[j]){
        v.pop_back(arr1[i]);
          i++;
          j++;
        }
         else if(arr1[i]<arr2[j]){
          i++;
        }
        else{
          j++;
        }

 }
        int a=v.size();
     for(int i=0; i<a; i++){
      cout<<v[i]<<" ";
     }
    };

    int main(){
    for(int i=0; i<5; i++){
      for(int j=i+1; j<5; j++){
         for(int k=j+1; k<5; k++){

          cout<<i<<" ";
          
          cout<<j<<" ";
          
          cout<<k<<" ";

         }
         


          
        
      }
      cout<<endl;
    }
    }


    // question -0 ek side or 1 ek side karna hai array me


    void FormatedArray(int arr[], int n){
      int left=0, right=n-1;
      while(left<right){
      while(arr[left]==0 && left<right){
        left++;
      }
      while(arr[right]==1 && left<right){
        right--;
      }
      if(arr[left]==1 && arr[right]==0 && left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
      }
      }

    }

    void PrintArray(int arr[], int n){
    
    for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
    }

    }

    int main(){
       int pass=786;
    int i=0;
    while(i!=pass){
        
        cout<<"Enter the password : "<<endl;
        cin>>i;
        if(i==pass){
            cout<<"successfully log in !";
        }
        else{
        cout<<"sale pass galat hai jaahil "<<endl;
        }
    }
    cout<<endl;
    cout<<endl;

    cout<<"formate your array of 0 and 1 elements "<<endl;
    cout<<endl;
     int n;
     int arr[100];
     cout<<"Enter the size of array"<<endl;
     cin>>n;
     cout<<"Enter the elements of array"<<endl;
     for(int i=0; i<n; i++){
      cin>>arr[i];
     }
     cout<<"Your formated array is ";

      FormatedArray(arr,n);
      PrintArray(arr,n);
    }

    // int main(){
    //   // vector<int>v;
    //   int arr[5]={2,1,7,9,5};
    //   for(int i=0; i<5; i++){
    //     for(int j=i+1; j<5; j++){
    //       for(int k=j+1; k<5; k++){
            

    //       }
    //     }
    //   }
    // }
 */

    

  














