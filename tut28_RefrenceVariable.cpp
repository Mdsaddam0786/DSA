#include<iostream>
using namespace std;

/*
void update(int n){  //isme sirf copy aai hai us n ki
    n=n+1;
}
void update2(int& n){ //isme wahi memory ka reference aya hai
    n=n+1;
}
//ise aise bhi likh sakte hain par warning dega ye bad practice

int& update2(int a){
    int num=a;
    int& n=num;
    

    return n;
}*/

/*
int main(){
 int i=5;
    //  create a regerence variable; 2 naam ke 2 memory create hui
    int& j=i;
    cout<<"value of i "<<i<<endl;
    j++;
    
    cout<<"value of j "<<j<<endl;
    int n=5;
   cout<<"before update "<<n<<endl;
    update2(n);
    cout<<"after update "<<n<<endl;*/

    // concept no.2:agar array ka size input me loge to variable form me ho jayega tab yah bhayanak chiz ho jayegi
    // isliye hame static memory nahi use karke dynamic memory use karni chahiye

    int getSum(int *arr, int n){
            int sum=0;

            for(int i=0; i<n; i++){
                sum+=arr[i];
            }
            return sum;

        }

    int main(){
        cout<<"Enter the size of array "<<endl;
        int n;
        cin>>n;
        cout<<"Enter the array "<<endl;
        int* arr=new int[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int ans=getSum(arr,n);
        cout<<ans;

      

        
    }






