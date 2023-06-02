#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this-> data=d;
        this-> next=NULL;
        this-> prev=NULL;
    }

    ~Node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next= NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }

};
 void insertAtHead(Node* &head,Node* &tail,int d){

    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        Node* temp=new Node(d);
        temp-> next=head;
        head->prev=temp;
        head=temp;
    }
 }

 void insertAtTail(Node* &tail,Node* &head,int d){
    if(tail==NULL){
        Node*temp=new Node(d);
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

 void insertAtPosition(Node* &tail,Node* &head,int position,int d){

    if(position==1){
        insertAtHead(head,tail,d);
        return;
    }

    Node* temp=head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,head,d);
        return;
    }

    Node* nodeToInsert=new Node(d);

    nodeToInsert->next= temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
 }

void print(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp -> next;
    }
    cout<< endl;
}

int getLength(Node* head){
    int len=0;
    Node*temp =head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void deleteNode(int position,Node* &head){

    if(position==1){
        Node*temp= head;
        temp-> next->prev=NULL;
        head=temp-> next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while (cnt<position)
        {
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

    Node* head=NULL;
    Node* tail=NULL;

    print(head);
    insertAtHead(head,tail,10);
    print(head);
    insertAtTail(tail,head,15);
    print(head);
    insertAtPosition(tail,head,1,3);
    print(head);
    insertAtHead(head,tail,8);
    insertAtPosition(tail,head,3,6);
    deleteNode(4,head);
    print(head);
 }