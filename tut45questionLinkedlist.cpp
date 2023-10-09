#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;

    }

};

Node* InsertAtTail(Node* tail,int d){
    Node* temp=new Node(d);
    temp->next=tail;
    tail=temp;

}


Node* InsertAtHead(Node* &head,int d){

    Node* temp=new Node(d);
    temp->next=head;
    head=temp;

}

void print(Node* head){
    Node* temp=head;
  while(temp !=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }

}

// iterative approach
Node* reverseList(Node* head) {


}
/*
//recursive Approach


void reverse(Node* &head,Node* curr,Node* prev){

    //base case
    if(curr==NULL){
        head=prev;
        return;
    }

    Node* forward=curr->next;
    reverse(head,forward,curr);
    
}

Node* reverseList(Node* head){
    Node* curr=head;
    Node* prev=NULL;
   reverse(head,curr,prev);
    return head;


}
*/

int main(){
     Node* node1=new Node(10);
      Node* head =node1;
     Node* tail=node1;
    //  InsertAtHead(head,8);
    //  InsertAtHead(head,9);
    //  InsertAtHead(head,10);
    // //  InsertAtHead(head,80);
    InsertAtTail(tail,7);
    InsertAtTail(tail,8);
    InsertAtTail(tail,9);

    //   reverseList(head);
       print(head);
       






}