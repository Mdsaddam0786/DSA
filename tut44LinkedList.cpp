#include<iostream>
#include<map>
using namespace std;

// Linked list:
// ek data structure hai jisme node hote hain
// node:consist karta hai data and agle node ka address

class Node{  
    public:
    int data;
    Node* next;
//constructor 
    Node(int data){  //isse naya node create karenge

        this ->data=data;
        this->next=NULL;
    }

    // destructor  yah kisi node ko delete karne ke liye hai
    ~Node(){
        int value=this->data;    
        // memory free
        if(this->next !=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data"<<value<<endl;
    }

};

void InsertAtHead(Node* &head,int d){

    // new node created
    Node* temp=new Node(d);
    temp->next=head;   //temp ke next ko head ke equl kar diya 
    head=temp;          
}

void InsertAtTail(Node* &tail,int d){

    //new node created
    Node* temp=new Node(d);      //ek temp create kiya node type ka

    temp->next=tail;             //temp ka next ko tail ke equal kar diya hai
    tail=temp;
}
void InsertAtPosition(Node* &tail,Node* &head,int position,int d){
    //agar first par insert karna ho to
    if(position==1){
        InsertAtHead(head,d);
    }
    Node* temp=head;
    int cnt=1;

    while(cnt < position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }

    // create a node for d
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

void DeleteNode(int position, Node* &head){

    // deleting first or start node
    if(position==1){
        Node* temp=head;
        head=head->next;
        //memory free start node
        temp->next=NULL;    //jab delete karo ye zaruri hi
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

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

}

void print(Node* &tail){

    Node* temp=tail;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}

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

int main(){

    Node* node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //head pointed to node1
    Node* head =node1;

    // tail pointed to node1
    Node* tail=node1;



     InsertAtHead(head,12);
     InsertAtHead(head,15);
     InsertAtHead(head,31);

    // InsertAtTail(tail,18);
    // InsertAtTail(tail,22);
    // InsertAtTail(tail,23);
    //  tail->next=head->next;
    

    //  InsertAtPosition(tail,head,3,19);
    //  print(head);

    // DeleteNode(2,head)    ;
    tail->next=head->next;
    cout<<head->data<< "is your head"<<endl;
    cout<<tail->data<< "is your tail"<<endl;
    // print(head);
    // print(head);
      cout<<IsLoop(head);


    return 0;
}
