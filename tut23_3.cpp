#include<iostream>
#include<vector>
using namespace std;
// Q1
// 2D array me se target find karna hai
//  ek 2D array(matrix) hai jo ki sorted hai 
 /*
  bool findTarget(vector<vector<int>>&matrix, int target){
    int start=0;
    int row=matrix.size();
    int col=matrix[0].size();
    int end=row*col-1;
    int mid=start+(end-start)/2;


    while(start<=end){
        int element=matrix[mid/4][mid%4]; //mid kis row par hai or kis column par hai 
        // case1 
        if(element==target){
            return 1;
        }
        //case2
        if(element<target){
            start=mid+1;
        }
        //case3
        if(element>target){
            end=mid-1;
        }

        mid=start+(end-start)/2;
    }
    return 0;
}



int main(){
    vector<vector<int>>matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
                              
 int target=11;

cout<<findTarget(matrix,target);
} 

//   question 2 on 2D array


*/
 

 // Q2
// ek 2D array hai jo row-wise sorted hai or column-wise bhi sorted hai
// arr[row][column]  aise idicate karta hai 
  
  bool findTarget(vector<vector<int>>&matrix, int target){
   
   int row=matrix.size();
   int col=matrix[0].size();
   int rowIndex=0;
   int colIndex=col-1;

    while( rowIndex<row && colIndex>=colIndex){
        int element=matrix[rowIndex][colIndex];

        if(element==target){
            return 1;
        }
        if(element>target){
            colIndex--;
        }
        if(element<target){
            rowIndex++;
        }
    }
    return 0;
      


  }



 int main(){
    vector<vector<int>>matrix={{1,4,5,6},
                             {2,8,9,10},
                            {3,11,12,13}};

            int target=4;

            cout<<findTarget(matrix,target);
 }
