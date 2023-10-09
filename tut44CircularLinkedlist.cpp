#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;

    }
    ~Node(){
        int val=this->data;
        if(this->next !=NULL){
            delete next;
            next=NULL;


        }
        cout<<"memory is free for node with data "<<val<<endl;
    }
};

void InsertNode(Node* &tail,int element ,int d){
    //empty list
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;

    }

    else{
        //non-empty list
        //assuming that the element is present in the list 

        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;

        }

        //element found-> curr is presenting elemetn wala node
        Node* temp=new Node(d);
        temp ->next=curr->next;
        curr->next=temp;

    }
}

 void print(Node*tail){
    Node* temp=tail;
    //1 empty list ke liye
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return ;
    }

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
  
    } while(tail !=temp);
    cout<<endl;





 }

 void DeleteNode(Node* tail,int value){
    
    //empty list
    if(tail==NULL){
        cout<<"List is empty ,please check again "<<endl;
        return ;
    }
    else{
        //non-empty
        //assuming that "value" is present in list
        Node* prev=tail;
        Node*curr=prev=prev->next;
        while(curr->data !=value){
            prev=curr;
            curr=curr->next;
        }
        
        prev->next=curr->next;
        //1 Node linked list
        if(curr==prev){
            tail=NULL;
        }
        //>=Node linked list
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;

    }
 }
 


int main(){
    Node* tail=NULL;

    //empty list me insert karre hai

    InsertNode(tail,5,7);
    print(tail);
    // InsertNode(tail,3,5);
    // print(tail);
    //  InsertNode(tail,5,7);
    // print(tail);
     InsertNode(tail,7,9);
    print(tail);
     InsertNode(tail,9,5);
    print(tail);
    InsertNode(tail,5,10);
    print(tail);

    DeleteNode(tail,7);
    print(tail);



}