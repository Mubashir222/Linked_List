#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printlist(Node* nodes){
    while(nodes != NULL){
        cout<<nodes->data<<" ";
        nodes = nodes->next;
    }
    cout<<"\n";
}
class Solution{
    public:
        Node *insertStart(Node *head,int x){
            Node *temp = new Node(x);
            if(head == NULL){
            return temp;
        }
        temp->next = head;
        return temp;
        }
        Node *insertEnd(Node *head,int x){
            Node *temp = new Node(x);
            if(head == NULL){
                return temp;
            }
            else{
                Node *ptr = head;
                while(ptr->next != NULL)
                ptr = ptr->next;
                ptr->next = temp;
                temp->next = NULL;
            }
            return head;
        }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter the N: ";
        cin>>n;
        cout<<endl;
    struct Node *head = NULL;
    for(int i = 0;i < n;++i){
        int data,indicator;
        cout<<"Enter the Data: ";
        cin>>data;
        cout<<"Enter the Indicator: ";
        cin>>indicator;
        Solution obj;
        if(indicator)
        head = obj.insertEnd(head,data);
        else
        head = obj.insertStart(head,data);
        }
    printlist(head);
    }    
    return 0;
}