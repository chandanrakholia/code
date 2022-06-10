#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    stack<int>st;
    vector<int>v;
    for (int i=n-1; i>=0; i--)
    {
        if (st.size()==0)
        {
            v.push_back(-1);
        }
        else if (st.top()>arr[i])
        {
            v.push_back(st.top());
        }
        else if (st.top()<=arr[i])
        {
            while (st.size()>0 and st.top()<=arr[i])
            {
                st.pop();
            }
            if (st.size()==0)
            {
                v.push_back(-1);
            }
            else{
                v.push_back(st.top());
            }
            
            
        }
        
        st.push(arr[i]);
        
    }
    reverse(v.begin(),v.end());
    for (int j = 0; j < v.size(); j++)
    {
        cout<<v[j]<<' ';
    }
    
    return 0;
}