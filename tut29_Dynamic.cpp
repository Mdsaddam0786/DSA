#include<iostream>
using namespace std;

//usaes of dynamic memory are known as dynamic allocation 
//run time me aloocation ke time size dene ke liye kiya jata hai



int main(){
   cout<<" Enter the row size "<<endl;
    int row=3;
    cin>>row;
    cout<<"Enter the col size "<<endl;
    int col=4;
    cin>>col;
    cout<<"Enter the array elements "<<endl;

    // for creating a 2d  array in heap
    int** arr=new int*[row];
    for(int i=0; i<row; i++){
        arr[i]=new int[col];
    }
    // for taking input for arrya
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    // for priting
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }

    //for deleting from heap memory
     for(int i=0; i<row;i++){
    delete [] arr[i];
     }

     delete []arr;
    



}