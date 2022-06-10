#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int n;
    int arr[]={100,80,60,70,60,75,85};
    n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    stack<pair<int,int>>s;
    for (int i =0; i<n; i++)
    {
        if (s.size()==0)
        {
            v.push_back(-1);
            // cout<<-1<<endl;
        }
        else if (s.size()>0 && arr[i]<s.top().first)
        {
            v.push_back(s.top().second);
            // cout<<s.top()<<endl;
        }
        else if (s.size()>0 && arr[i]>=s.top().first)
        {
            while (s.size()>0 and s.top().first<=arr[i])
            {
                s.pop();
            }
            if (s.size()==0)
            {
                v.push_back(-1);
                // cout<<-1<<endl;
            }
            else
            {
                v.push_back(s.top().second);
                // cout<<s.top()<<endl;
            }
            
        }
        
        s.push({arr[i],i});
        
    }
    // reverse(v.begin(),v.end());
    for (int j = 0; j < n; j++)
    {
        cout<<j-v[j]<<endl;
    }
    
    
    return 0;
}