#include<bits/stdc++.h>
#include<iostream>
using namespace std;
pair<int,int> MAX(queue<pair<int,int>>q,int k){
    vector<pair<int,int>>v;
    vector<pair<int,int>>ans;
    int i=0;
    while(q.size()>0 and i<k){
        v[i]={q.front().first,q.front().second};
        q.pop();
        i++;
    }   
    return {1,1};
}
int main(){
    queue<pair<int,int>>q;
    int n,k;cin>>n>>k;
    vector<pair<int,int>>v;
    int v2[k];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        q.push({x,i});
        if (q.size()==k)
        {   
            v.push_back(MAX(q,k));
            q.pop();
        }
    }
    cout<<v2[0];   
    return 0;
}