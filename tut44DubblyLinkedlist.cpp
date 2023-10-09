#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor;

    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        if(next !=NULL){
            delete next;
            next =NULL;
        }
        cout<<"memory free for node with data"<<  val   <<endl;
    }
};


void print(Node* head){ 
    Node* temp=head;

    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}

int getLength(Node* head){
    Node* temp=head;
    int len=0;

    while(temp !=NULL){
        len++;
        temp=temp->next;

    }
return len;
}
void InsertAtHead(Node* &tail,Node* &head,int d){

    // empty list
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{


 Node* temp=new Node(d);
 temp ->next=head;
 head->prev=temp;
 head=temp;
    }


 
}
void InsertAtTail(Node* &tail ,Node* &head,int d){

    if(head==NULL){
        Node* temp=new Node(d);
        tail=temp;
        head=temp;

    }
    else{
        Node* temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
        
    }
}
void InsertAtPosition(Node* &tail,Node* &head,int position,int d){

    //insert at start
    if(position==1){
        InsertAtHead(tail,head,d);
        return;
        
    }

    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //inserting at last position

    if(temp->next==NULL){
        InsertAtTail(tail,head,d);
        return;
    }
    //inserting at middle

    //create a node for d
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;

}

void DeleteNode(int position,Node* &head){
    //deleting fisrt or last node
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;

    }
    else{
        // deleting any middle node or last node
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;

        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;

        }

        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;

        delete curr;
    }
}





int main(){

    Node* node1=new Node(10);
    Node* head =node1;
    Node* tail =node1;

    print(head);
    // cout<<getLength(head);

     InsertAtHead(tail,head,19);
    print(head);
    // InsertAtTail(tail,head,2);
    //  print(tail);
    // InsertAtTail(tail,head,21);
    // print(tail);
    InsertAtPosition(tail,head,3,300);
    print(head);

    DeleteNode(3,head);
        print(head);


    return 0;
}