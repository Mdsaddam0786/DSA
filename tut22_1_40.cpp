#include<iostream>
#include<vector>
using namespace std;
// question  compress the string
/*ek string hai jisme se same characters ko remove ka karke us character ke count ko batana hai 
agar single character hai to sirf wah character hi likh dena hai

example:
intput:"aabbbcccca"
output:"a,2,b,3,c,5,a";
*/
//yah function compressed char ka naya length return karega 
vector<char> CompressString(vector<char>&chars){
    int s=0;
    int i=0;
    int ansIndex=0;
    int n=chars.size();

    while(i<n){
        int j=i+1;
        //agar charcter me same element milta rahega to loop chalta rahega 
        while(j<n && chars[i]==chars[j]){
            j++;
        }

        //agar diffrent element milega tabhi yaha aayega
        //ya fir char array pura khatam ho jayega tab
        chars[ansIndex++]=chars[i];
        int count=j-i;
        if(count>1){
            string cnt=to_string(count);
        for(char mych:cnt){
           chars[ansIndex++]=mych;
        }

        }
        i=j;
       


    }
       return chars;
}

int main(){
    vector<char>ch={'b','b','c','c','c','d','d'};
    CompressString(ch);
    for(char i:ch){
        cout<<i<<endl;
    }
}