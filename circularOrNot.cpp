#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
 
    }
};
void print(Node* &head){
    Node* temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }

}
void InsetAtHead(Node* &head,int d){

    Node* temp=new Node(d);

    temp->next=head;
    head=temp;


}


bool IsCircular(Node* &head){
//   jab linked list khali ho to
    if(head==NULL){
        return true;
    }
    //jab linked list me 1 element ho to ya souble


    // 1 se jyad node ho to check kar
    Node* temp=head->next;


    while(temp!=NULL && temp!=head ){
        temp=temp->next;
        if(temp=head){
            return true;
        }
        else{
            return false;
        }
    }


    
}

int main(){

     Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    
    // InsetAtHead(head,10);

    
    //  print(head);
   if(IsCircular(head)){
    cout<<"linked is circular";
   }
   else{
    cout<<" not circular";
   }

     
  
 
  


}