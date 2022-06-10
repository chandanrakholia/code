#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int n;
    int arr[]={4,5,2,10,8};
    n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    stack<int>s;
    for (int i =0; i<n; i++)
    {
        if (s.size()==0)
        {
            v.push_back(-1);
            // cout<<-1<<endl;
        }
        else if (s.size()>0 && arr[i]>s.top())
        {
            v.push_back(s.top());
            // cout<<s.top()<<endl;
        }
        else if (s.size()>0 && arr[i]<=s.top())
        {
            while (s.size()>0 and s.top()>=arr[i])
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
                v.push_back(s.top());
                // cout<<s.top()<<endl;
            }
            
        }
        
        s.push(arr[i]);
        
    }
    // reverse(v.begin(),v.end());
    for (int j = 0; j < n; j++)
    {
        cout<<v[j]<<endl;
    }
    
    
    return 0;
}
