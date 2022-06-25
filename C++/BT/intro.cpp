#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void printpreorder(Node* head){
    if (head==NULL)
        return;
    cout<<head->data<<' ';
    printpreorder(head->left);
    printpreorder(head->right);
    
}
void printinorder(Node* head){
    if(head==NULL)
        return;
    printinorder(head->left);
    cout<<head->data<<' ';
    printinorder(head->right);
}
void printpostorder(Node* head){
    if (head==NULL)
        return;
    printpostorder(head->left);
    printpostorder(head->right);
    cout<<head->data<<' ';    
}
void printinorderstack(Node* head){
    stack<Node*>s;
    Node* curr=head;
    while (curr!=NULL || s.empty()==false)
    {
        while(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->data<<' ';
        curr=curr->right;
    }
    
}

int main(){
    Node* root=new Node(100);
    root->left=new Node(50);
    root->left->left=new Node(20);
    root->left->right=new Node(70);
    root->right=new Node(150);
    printinorder(root);
    cout<<endl;
    printinorderstack(root);
    cout<<endl;
    printpreorder(root);
    cout<<endl;
    return 0;
}