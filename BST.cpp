#include<iostream>
using namespace std;
struct node{
    int key;
    struct node *left,*right;
};
struct node *NewNode(int data){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = data;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct node *root){
    if (root != NULL){
        inorder(root->left);
        cout<<root->key<<"->";
        inorder(root->right);
    }
}
struct node *insert(struct node *node,int key){
    if (node == NULL)
        return NewNode(key);
    if (key < node->key)
        node->left = insert(node->left,key);
    else if(key > node->key)
        node->right = insert(node->right,key);
        return node;    
}
int main(){
    struct node *root = NULL;
    root = insert(root,8);
    root = insert(root,3);
    root = insert(root,1);
    root = insert(root,6);
    root = insert(root,7);
    root = insert(root,10);
    root = insert(root,14);
    root = insert(root,4);
    cout<<"Inoder traversal is: ";
    inorder(root);
    return 0;
}