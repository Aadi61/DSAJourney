#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
//Iteration method
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head==NULL){
        return NULL;
    }
    LinkedListNode<int> *previous=NULL;
    LinkedListNode<int> *current=head;
    LinkedListNode<int> *forward=NULL;
    while(current!=NULL){
        forward= current-> next;
        current-> next= previous;
        previous= current;
        current=forward;
    }

    return previous;
}

//Recursive method
Reverse(LinkedListNode *head){
    if(head==NULL || head->next){
        return;
    }

    Node* newHead=Reverse(head->next){
        
        head->next->next=head;
        head->next=NULL;
        
        return newHead;
    }
}