#include<iostream>
#include<vector>
#include<string>
using namespace std;
/*Problem:keyboard hai jiske sabhi buttorns par kuchh spellings mapped hai
or tume ek strings input me milega 
fir yah batana hai ke: separate digit wale buttons dabane par kon kon letters ka combination banega 
example:
input:"23";
yani 2 wale button par -"abc" mapped hai
or 3 wale buttons par -"def " mapped hai
ab tumhe strings "abc" & "def" ke total subsets*/
  
  void solve(string digit,string output,int index,vector<string>& ans,string mapping[]){

    //base casea
    if(index>=digit.length()){
        ans.push_back(output);
        return ;
    }
    
    //digit ka 1st number nikal 
    int number=digit[index]-'0';
    //1st number ka kon stirng mapped hai wo nikal
    string value=mapping[number];
    
   //jo mapped value hai usse dusre number ke mapped value ke sath combinatioin bana
    for(int i=0; i<value.length(); i++){
        output.push_back(value[i]);
        solve(digit,output,index+1,ans,mapping);
        output.pop_back();   //dusre number ke jinke sath combination ban gaya use delete kar
    }
 
     


  }

   vector<string>LetterCombination(string& digit){
    vector<string>ans;
    if(digit.length()==0)
    return ans;

    int index=0;
    string output="";
     string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digit,output,index,ans,mapping);
    ans.push_back("saddam");

    for(string i:ans){
      cout<<i;
    } // void ka function bana ke yaha loop chala kar print kar le

   }

    int main(){
        // check karo kyoun nahi de araha ans
        string str="23";
        vector<string>temp;
      temp=LetterCombination(str); 
      for(string s:temp){
        cout<<s<<" ";
      }
    }
