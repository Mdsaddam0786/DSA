#include<iostream>
#include<vector>
using namespace std;
// question:sort an array without using any algo with elemnt 0,1 and 2
//geekforgeek
void sort012(int a[], int n)
    {
      
      
      int count0=0;
      int count1=0;
      int count2=0;
      int j=0;
       
       
       
      for(int i=0; i<n; i++){
          
          if(a[i] ==0){
              count0++;
              
          }
          else if(a[i]==1){
              count1++;
          }
          
          else if(a[i]==2){
              count2++;
              
          }
              
          
      }
      
      while(count0 !=0){
          a[j]=0;
          count0--;
          j++;
          
      }
      
      while(count1 !=0){
          a[j]=1;
          count1--;
          j++;
      }
      while(count2 !=0){
          a[j]=2;
          count2--;
          j++;
      }
    }






// question rotate an array
void RotateArray(vector<int>&arr,int k){

    vector<int>temp;
       
    for(int i=0; i<=arr.size()-1; i++){ 

        temp[(i+k)%arr.size()]=arr[i];


    }  
    arr=temp;
}

int PrintArray(vector<int>&arr){

    for(int i:arr){
       cout<<i;
    }
    
  }


int main(){

vector<int>arr;

 arr.push_back(2);
 arr.push_back(4);
 arr.push_back(5);
 arr.push_back(6);
 int k=2;

  
    RotateArray(arr,k);
  
    PrintArray(arr);

}/*
bool CheckVector(vector<int>&v){
    int count=0;
    int s=0; 
    int e=v.size()-1;

    while(s<=e){
        for(int i=0; i<=e; i++){
        if(v[i]>v[i+1]){
            count++;
        }
        }

    }
    while(s<=e){
        if(v[e]>v[s]){
            count++;
        }
    }
    if(count<=2){
    return true;

    }
   


     
}

int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(2);
    for(int i:v){
        cout<<i;
    }

    CheckVector(v);


}





/*
void reverse(vector<int>&ans){

    int s=0;
    int e=ans.size()-1;

    while(s<=e){
        
            swap(ans[s],ans[e]);
            s++;
            e--;
        
    }
}

void SumArray(vector<int>&a,vector<int>&b,vector<int>&ans){

    int i=a.size()-1;
    int j=b.size()-1;
    int carry=0;
    

    while(i>=0 && j>=0){
        int val1=a[i];
        int val2=b[j];
     
     int sum=val1+val2+carry;
     carry=sum/10;
     int val=sum%10;
     ans.push_back(val);
     i--;
     j--;
    }
    while(i>=0){
    int sum=a[i]+carry;
     carry=sum/10;
     int val=sum%10;
     ans.push_back(val);
     i--;

    }
    while(j>=0){
        int sum=b[j]+carry;
     carry=sum/10;
     int val=sum%10;
     ans.push_back(val);
     j--;

    }
    while(carry !=0){
    int sum=carry;
    carry=sum/10;
    int val=sum%10;
     ans.push_back(val);
    


    }
    reverse(ans);
    


}

void PrintArray(vector<int>&ans){
    for(int i=0; i<=ans.size()-1;i++){
        cout<<ans[i];
    }

}
int main(){
    cout<<" first vector ";
   vector<int>a;
   a.push_back(1);
   a.push_back(2);
   a.push_back(3);
   a.push_back(4);
   a.push_back(5);
   for(int i:a){
    cout<<i;
   }
   
   cout<<endl;
   cout<<" 2nd vector ";

    vector<int>b;
    
    b.push_back(0);
    b.push_back(0);
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);
    for(int i:b){
        cout<<i;
    }
    cout<<endl;
    
    vector<int>ans;
   
    SumArray(a,b,ans);
    cout<<"Your answer vector is ";
     PrintArray(ans);
  
}



//   quetion:geekforgeek
//   negative or positive values ka ek array hai 
//   ans me ek positive or uske bad negative values dena hai
	void rearrange(int arr[], int n) {
	     
	     
	     //2 vector bana lenge
	   vector<int>vPositive;
	   vector<int>vNegative;
	   int s=0;

	   while(s<n){
	       //agat negative hai to negative wale vector me dal denge
	       if(arr[s] < 0){
	           vNegative.push_back(arr[s]);
	           s++;
	       }
	       //nahi to positive wale vetor me dal denge
	       else{
	          vPositive.push_back(arr[s]);
	          s++;
	       }
	       
	       
	   }
	   
	   int negativeIndex=0;//negative wale vector ko point karega
	   int positiveIndex=0;//positive wale vector ko point karega
	   int ansIndex=0;// ans wale array ko point karega 
	   
	   
        //jab dono vector ka index uske size se chhota hai
        while(negativeIndex <vNegative.size() && positiveIndex <vPositive.size() ){
            
            arr[ansIndex]=vPositive[positiveIndex];
            ansIndex++;
            positiveIndex++;
            
            arr[ansIndex]=vNegative[negativeIndex];
            ansIndex++;
            negativeIndex++;
        }
        //jab negative wala value jyada ho
        while(negativeIndex<vNegative.size()){
            arr[ansIndex]=vNegative[negativeIndex];
            negativeIndex++;
            ansIndex++;
        }
	    //jab positive wala value jayd ho
	     while(positiveIndex<vPositive.size()){
            arr[ansIndex]=vPositive[positiveIndex];
            positiveIndex++;
            ansIndex++;
        }
	   
	   
	   
	   
	}






*/