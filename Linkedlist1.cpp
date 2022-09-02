#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
class List{
    Node *head;
    Node *tail;
    public:
        List(){
            head == NULL;
            tail == NULL;
        }
// void insertatBegining(Node* head,int n){
//     Node* temp = new Node(n);
//     if(head == NULL){
//         return temp;
//     }
//     temp->next = head;
//     return temp;
// }
void insert(int n){
    Node *temp = new Node;
    temp->data = n;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
        tail = temp;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}

void display(){
    Node *temp;
    head = temp;
    if(head == NULL){
        cout<<"Head is Empty."<<endl;
    }
    else{
        cout<<"Linked list is: ";
        while(head != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
    }
}
};
int main(){
    List obj;
    obj.display();
    obj.insert(1);
    obj.insert(3);
    obj.insert(4);
    obj.display();
    return 0;
}