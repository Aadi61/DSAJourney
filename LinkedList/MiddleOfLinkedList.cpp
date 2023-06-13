/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    // Write your code here
    int count=0;
    if(head->next ==NULL){
        return head;
    }
    Node*temp=head;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    if (count % 2 == 0) {
      count = (count / 2) ;
    }
    else{
        count=count/2+1;
    }
    int n=0;
    Node* curr=head;
    while(n!=count){
        
        curr=curr->next;
        n++;
    }
    return curr;
}
