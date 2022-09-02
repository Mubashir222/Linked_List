#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
class Linkedlist{
    public:
        Node* head;
        Linkedlist(){
            head = NULL;
        }
    void printList(Node* n){
        while(n != NULL){
            cout<<n->data<<"->";
            n = n->next;
        }
    }
    void insertBegining(int newnode){
    	/* 1. allocate node */
	    Node* node = new Node();
	    /* 2. put in the data */
    	node->data = newnode;
	    /* 3. Make next of new node as head */
    	node->next = head;
	    /* 4. move the head to point to the new node */
	    head = node;
    }
    void insertAfter(Node* prev_node,int newdata){
        if (prev_node == NULL){
            cout<<"The given previous node cannot be NULL: ";
        }
        Node* newnode = new Node();
        newnode->data = newdata;
        newnode->next = prev_node->next;
        prev_node->next = newnode;
    }
    void printList(){
        Node* temp = head;
        if (temp != NULL){
            cout<<"The Linked list is: ";
            while (temp != NULL){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<endl;
        }
        else{
            cout<<"The list is empty.";
        }
        
    }
};
int main(){
    Node* head = NULL;
    Linkedlist l;
    l.insertBegining(10);
    l.insertBegining(20);
    l.insertBegining(30);
    l.insertAfter(head->next,40);
    l.printList();
    return 0;
}