#include<iostream>
#include<map>
using namespace std;

class Node{
    int data;
    Node* next;

    // constructor
    Node(int data){
        this->data=data;
        this->next=next;

    }
};
 
//  loop present hai ke nahi ye pata lagana hai
bool IsLoop(Node* head){
    //
    if(head==NULL){
        return false ;
    }

  map<Node*,bool>visited;
  Node* temp=head;


    while(temp !=NULL){
        
        if(visited[temp]==true){
            return true;
        }

        else{
            visited[temp]=true;
            temp=temp->next;
        }
    }
    return false;
};
// floyed algorithm

Node* isLoopFloyed(Node* head){
    if(head==NULL){
     return NULL;
    }

    Node* slow=head;
    Node* fast=head;

    while(fast !=NULL){
       fast=fast->next;
       if(fast!=NULL){
        fast=fast->next;
       }
       slow=slow->next;
       if(fast==slow){
        return slow;
        cout<<"loop at "<<slow->data<<endl;

       }

    }
    return NULL;
}

Node* getStartingNode(Node* head){

    if(head==NULL){
        return NULL;
    }

    Node* intersection=isLoopFloyed(head);
    Node* slow=head;

    while(slow !=intersection){
        slow=slow->next;
        intertsection=intersection->next;

    }
   
   return slow;
}
  void RemoveLoop(Node* head){
    if(Node==NULL){
        return ;

    }
    Node* startOfLoop=getStartingNode(head);
    Node* temp=startOfLoop;

    while(temp->next != startOfLoop){
        temp=temp->next;
    }

    temp->next=NULL;
  }

int main(){

    // in function ko try karne ke liye singly list loop me jo
    
}

  


