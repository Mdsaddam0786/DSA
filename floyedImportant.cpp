#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;

    }

};

//InsertAthead

void InsertAtHead(Node* &head,int d){

    Node* temp=new Node(d);

    temp->next=head;
    head=temp;
}

void Print(Node* &head){
    Node* temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

// write a function for detect the loop
//floyed algorithm

bool IsLoopPresent(Node* &head){


    // for NULL linked list

    if(head==NULL ){
        return false;
    }
    else if(head->next ==NULL){
        return false;
    }

    Node* slow=head;
    Node* fast=head;

     while(fast !=NULL){
        fast=fast->next;

        if(fast !=NULL){
            fast=fast->next;
        }

        slow=slow->next;
        if(slow==fast){
            return true;
        }
     }
     return false;
}

//

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    // InsertAtHead(head,11);
    // InsertAtHead(head,12);
    // InsertAtHead(head,13);


//    making loop in this list
//  tail->next=head->next;
   
 cout<< IsLoopPresent(head);


    //Print(head);
}