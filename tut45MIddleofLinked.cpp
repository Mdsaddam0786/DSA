#include<iostream>
using namespace std;
  
//   pdf node jaake dekh

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

int getLength(Node* head){
    int len=0;
    while(head !=NULL){
        len++;
        head=head->next;
    }

    return len;
}
//time complexity o(n)+o(n)/2
Node* findMiddle(Node* head){
    int len=getLength(head);
    int ans=(len/2);  //agar node chahiye the to +1 karna hota

    Node* temp=head;
    int cnt=0;

    while(cnt<ans){
        temp=temp->next;
        cnt++;
    }

    return temp;
}

//middle of linked list 
//optimized solution

Node* getMiddle(Node* head){

    if(head==NULL || head->next==NULL){
        return head; 
        //2 nodex-needed or not
        if(head->next->next==NULL){
            return head->next;

        }

        Node* slow=head;
        Node* fast=head->next;

        while(fast !=NULL){
            fast=fast->next;
            if(fast !=NULL){
                fast=fast->next;
            }

            slow=slow->next;
        }

        return slow;
    }
}