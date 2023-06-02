#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this-> data=d;
        this-> next=NULL;
    }

    ~Node(){
        int value= this->data;
        if(this->next != NULL){
            delete next;
            next=NULL;
        }
        cout<<" memory is free for node with data "<<value<<endl;
    }

};

void insertNode(Node* &tail,int element,int d){
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode-> next=newNode;
    }
    else{
         Node* curr = tail;

        while(curr->data != element) {
            curr = curr -> next;
        }
        //element found -> curr is representing element node
        Node* temp= new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }

}
void print(Node* tail){
    Node* temp=tail;

    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    do{
        cout<< tail -> data <<" ";
        tail=tail->next;
    }while (tail != temp);
    
    cout<<endl;
    
}

void deleteNode(Node* &tail, int value){

    if(tail==NULL){
        cout<<"List is empty, please check again"<<endl;
        return;
    }
    else{

        Node* prev=tail;
        Node* curr= prev->next;

        while (curr->data != value)
        {
            prev=curr;
            curr=curr->next;
        }

        prev->next = curr->next;

        //1 Node linked list
        if(curr==prev){
            tail=NULL;
        }
        
        //>=2 Node linked list
        else if(tail=curr){
            tail=prev;
        }

        curr->next=NULL;
        delete curr;
    }
}

int main(){

    Node* tail=NULL;
    insertNode(tail,4,3);
    print(tail);
    insertNode(tail,3,10);
    print(tail);
    insertNode(tail,10,5);
    insertNode(tail,5,7);
    insertNode(tail,7,1);
    print(tail);
}