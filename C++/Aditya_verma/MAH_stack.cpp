#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int n;
    int arr[]={6,2,5,4,5,1,6};
    n=sizeof(arr)/sizeof(arr[0]);

    //FOR NSL

    vector<int>v1;
    stack<pair<int,int>>s1;
    for (int i =0; i<n; i++)
    {
        if (s1.size()==0)
        {
            v1.push_back(-1);
            // cout<<-1<<endl;
        }
        else if (s1.size()>0 && arr[i]>s1.top().first)
        {
            v1.push_back(s1.top().second);
            // cout<<s.top()<<endl;
        }
        else if (s1.size()>0 && arr[i]<=s1.top().first)
        {
            while (s1.size()>0 and s1.top().first>=arr[i])
            {
                s1.pop();
            }
            if (s1.size()==0)
            {
                v1.push_back(-1);
                // cout<<-1<<endl;
            }
            else
            {
                v1.push_back(s1.top().second);
                // cout<<s.top()<<endl;
            }
            
        }
        
        s1.push({arr[i],i});
        
    }

    //FOR NSR
    vector<int>v2;
    stack<pair<int,int>>s2;
        for (int i =n-1; i>=0; i--)
    {
        if (s2.size()==0)
        {
            v2.push_back(n);
            // cout<<-1<<endl;
        }
        else if (s2.size()>0 && arr[i]>s2.top().first)
        {
            v2.push_back(s2.top().second);
            // cout<<s.top()<<endl;
        }
        else if (s2.size()>0 && arr[i]<=s2.top().first)
        {
            while (s2.size()>0 and s2.top().first>=arr[i])
            {
                s2.pop();
            }
            if (s2.size()==0)
            {
                v2.push_back(n);
                // cout<<-1<<endl;
            }
            else
            {
                v2.push_back(s2.top().second);
                // cout<<s.top()<<endl;
            }
            
        }
        
        s2.push({arr[i],i});
        
    }
    reverse(v2.begin(),v2.end());

    int area[n];
    int width[n];
    for (int i = 0; i < n; i++)
    {
        width[i]=v2[i]-v1[i]-1;
    }
    
    for (int i = 0; i < n; i++)
    {
        area[i]=arr[i]*width[i];
        // cout<<area[i]<<endl;
    }

    cout<<*max_element(area,area+n);
    
    return 0;
}
