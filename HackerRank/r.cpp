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
Node* constructBST(int preorder[],int* preorderidx,int key,int min,int max,int n){
    if (*preorderidx>=n){
        return NULL;
    }
    
    Node* root=NULL;
    if(key>min && key<max){
        root=new Node(key);
        *preorderidx=*preorderidx+1;

        if(*preorderidx < n){
            root->left=constructBST(preorder,preorderidx,preorder[*preorderidx],min,key,n);
        }
        if(*preorderidx < n){
            root->right=constructBST(preorder,preorderidx,preorder[*preorderidx],key,max,n);
        }
    }
    return root;
}
void printpreorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<' ';
    printpreorder(root->left);
    printpreorder(root->right);

}
void fun(Node* root)
{
    if (root == NULL)return;
    fun(root->left);
    if (!(root->left) && !(root->right))
        cout << root->data << " ";
 
    fun(root->right);
}
void left(Node* root)
{
    if (root == nullptr)
        return;
 
    if (root->left) {
        cout << root->data << " ";
        left(root->left);
    }
    else if (root->right) {
        cout << root->data << " ";
        left(root->right);
    }
}
void right(Node* root)
{
    if (root == NULL) return;
    if (root->right) 
    {
        right(root->right);
        cout << root->data << " ";
    }
    else if (root->left) 
    {
        right(root->left);
        cout << root->data << " ";
    }
}
 
void anticlock_tree(Node* root)
{
    if (root == NULL)return;
    cout << root->data << " ";
    left(root->left);
    fun(root->left);
    fun(root->right);
    right(root->right);
}
void level_order_trav(Node* root)
{
    if (root == NULL)
        return;
    queue<Node*> q;
    q.push(root);
    while (q.size()>0) {
        Node* temp = q.front();
        cout << temp->data << ' ';
        q.pop();
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
}
Node* constructBST_level_order(vector<int>order){
    queue<Node*>q;
    int k=1;
    Node* root;
    Node* n;
    for(int i=0;i<order.size();i++){
        if(order[i]!=-1){

        if(i==0){
            n=new Node(order[i]);
            root=n;
            q.push(n);
        }
        else{
            Node* temp=new Node(order[i]);
            if(k==1){
                q.front()->left=temp;
                q.push(temp);
                k=0;
            }
            else{
                q.front()->right=temp;
                q.push(temp);
                k=1;
                q.pop();
            }
        }
        }
    }
    return root;
}
Node* search(queue<pair<int,Node*>> q,int key){
    Node* k;
    while (q.size()>0)
    {
        if (q.front().first==key)
        {
            k= q.front().second;
            break;
        }
        q.pop();
    }
    return k;
}
void top_viewBTL(Node* root, vector<int> &v1){
    if(root==NULL) return;
    top_viewBTL(root->left,v1);
    v1.push_back(root->data);
}
void top_viewBTR(Node* root, vector<int> &v1){
    if(root==NULL) return;
    top_viewBTR(root->right,v1);
    v1.push_back(root->data);
}
int main(){
    int n;
    cin>>n;
    queue<pair<int,Node*>>q;
    Node* root=new Node(1);
    q.push({1,root});
    for (int i = 0; i < n; i++)
    {
        int a,b;
        char c;
        cin>>a>>b>>c;
        Node* p=search(q,a);
        if(c=='L'){
            p->left=new Node(b);
            q.push({b,p->left});
        }
        else if(c=='R'){
            p->right=new Node(b);
            q.push({b,p->right});
        }
    }
    vector<int>v1;
    vector<int>v2;
    top_viewBTL(root,v1);
    top_viewBTR(root->right,v2);
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<' ';
    }
    for (int i = 0; i < v2.size(); i++)
    {
        cout<<v2[i]<<' ';
    }
    
    return 0;
}