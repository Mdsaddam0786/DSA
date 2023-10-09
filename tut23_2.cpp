#include<iostream>
#include<vector>
using namespace std;

 
vector<int>SpiralPrint(vector<vector<int>>& matrix){
    vector<int>temp;

    int row=matrix.size();
    int col=matrix[0].size();
    int total=row*col;
    int count=0;

    // index declaration
    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;
    int endingCol=col-1;

    while(count<total){
        // 1st row printing
        for(int index=startingCol;count<total && index<=endingCol; index++){
            temp.push_back(matrix[startingRow][index]);
                    count++;
                    }
                    startingRow++;
               
     //ending col printing
    
    for(int index=startingRow; count<total && index<=endingRow; index++){
        temp.push_back(matrix[index][endingCol]);

    count++;
    }
    endingCol--;
    // ending row printing
    for(int index=endingCol; count<total && index>=startingCol; index-- ){
        temp.push_back(matrix[endingRow][index]);
    count++;
    }
    endingRow--;
    // printing 1st column
    for(int index=endingRow; count<total && index>=startingRow; index--){
        temp.push_back(matrix[index][startingCol]);
    count++;
    }
    startingCol++;



}
   for(int i:temp){
    cout<<i;
   }
}







/*
vector<int>wavePrint( vector<vector<int>>arr,int nRow,int mCol){
    vector<int>temp;

    for(int col=0; col<=mCol-1; col++ ){

    if(col&1){
        // ye odd ke liye
        for(int row=nRow-1; row>=0; row--){
            temp.push_back(arr[row][col]);

        }
       }
       else{
        // even ke liye
        for(int row=0; row<=nRow; row++){
            temp.push_back(arr[row][col]);
        }
       }
    }
  for(int i:temp){
    cout<<i;
  }
}
int Printvector(vector<vector<int>>arr,int n,int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
    }
}




int main(){
    vector<vector<int>>arr{{2,3,4},
                          {5,6,7},
                          {6,8,9}};
                  wavePrint(arr,3,3);
                 cout<< Printvector(arr,3,3);
                  

}*/

int main(){
    vector<vector<int>>matrix={{1,2,3,11}
                              ,{4,5,6,12}
                              ,{7,8,9,13}};

    SpiralPrint(matrix);
}