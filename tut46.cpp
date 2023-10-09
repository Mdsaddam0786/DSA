#include<iostream>
using namespace std;

  class ListNode{
    public:
    int data;
    ListNode* next;

    // constructor

    ListNode(int d){
        this->data=d;
        this->next=next;

    }

  }


//reverse karna hai first k nodes ko 
//agar bacha hua node k se kam hai to aise hi return kar do 
//jaake leet code par dekh le
  ListNode* reverseKGroup(ListNode* head, int k) {
        // Write your code here.
            int len = 0;
    ListNode *temp = head;
    while(temp != NULL){
          temp = temp -> next;
          len++;
    }
    if(len < k){
       return head;
    }
   

    if(head==NULL){
        return NULL;
    }

    // case 1st
     ListNode* next=NULL;
    ListNode* curr=head;
   ListNode* prev=NULL;
   
    int cnt=0;

    while(curr !=NULL && cnt<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        cnt++;

    }
  

    // remainning par recursive sambhal lega
    if(next != NULL){
        head->next=reverseKGroup(next,k);
    }


    return prev;

        
    }


int mian(){

}