#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int n;
    int arr[]={1,3,2,4};
    n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    stack<int>s;
    for (int i =n-1; i>=0; i--)
    {
        if (s.size()==0)
        {v.push_back(-1);}
        else if (s.size()>0 && arr[i]<s.top())
        {v.push_back(s.top());}
        else if (s.size()>0 && arr[i]>=s.top())
        {
            while (s.size()>0 and s.top()<=arr[i])
            {
                s.pop();
            }
            if (s.size()==0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
            
        }
        
        s.push(arr[i]);
        
    }
    reverse(v.begin(),v.end());
    for (int j = 0; j < n; j++)
    {cout<<v[j]<<endl;}
    
    
    return 0;
}
