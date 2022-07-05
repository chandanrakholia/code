#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;
};
node* newNode(int data)
{
    node* temp = new node();
 
    temp->data = data;
    temp->left = temp->right = NULL;
 
    return temp;
}
node* constructTreeUtil(int pre[], int* preIndex, int low,int high, int size)
{
    if (*preIndex >= size || low > high)
        return NULL;
    node* root = newNode(pre[*preIndex]);
    *preIndex = *preIndex + 1;
 
    if (low == high)
        return root;
 
    int i;
    for (i = low; i <= high; ++i)
        if (pre[i] > root->data)
            break;
 
    root->left = constructTreeUtil(pre, preIndex, *preIndex,i - 1, size);
    root->right= constructTreeUtil(pre, preIndex, i, high, size);
 
    return root;
}
node* constructTree(int pre[], int size)
{
    int preIndex = 0;
    return constructTreeUtil(pre, &preIndex, 0, size - 1,size);
}
int countNodes(vector<int> adj[], int root)
{   
    int count = 0;
    queue<int> q;
    q.push(root);
     
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for( int i=0;i<adj[node].size();i++)
        {   
            int children = adj[node][i];
            if (adj[children].size() > adj[node].size())
                count++;
            q.push(children);
        }
    }
 
    return count;
}
void printpreorder(node* root){
    if (root==NULL)
    {
        return;
    }
    
    cout<<root->data<<' ';
    printpreorder(root->left);
    printpreorder(root->right);
}
void no_child_node(node* root){
    int count=0;
    if (root==NULL)
    {
        count++;
        return;
    }
    no_child_node(root->left);
    no_child_node(root->right);
    cout<<count;
}
int main(){
    int size;
    cin>>size;
    int pre[size];
    for (int i = 0; i < 7; i++)
    {
        cin>>pre[i];
    }
    node* root = constructTree(pre, size);
    printpreorder(root);
    no_child_node(root);
    return 0;
}