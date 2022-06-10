#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int MAX(queue<int>q,int k){
    int arr[k];
    int i;
    i=0;
    while(!q.empty() and i<3){
        arr[i]=q.front();
        q.pop();
        i++;
    }
    return *max_element(arr,arr+k);
}
int main(){
    queue<int>q;
    int n,k;cin>>n>>k;
    vector<int>v;
    int v2[k];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
        if (q.size()==k)
        {   
            v.push_back(MAX(q,k));
            q.pop();
        }
    }
    cout<<v[0];   
    return 0;
}