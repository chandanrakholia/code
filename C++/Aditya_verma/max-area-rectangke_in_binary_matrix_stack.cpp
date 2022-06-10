#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int MAH(int arr[],int n){
    vector<int>v1;
    stack<pair<int,int>>s1;

    //FOR NSL

    for (int i =0; i<n; i++)
    {
        if (s1.size()==0)
        {
            v1.push_back(-1);
        }
        else if (s1.size()>0 && arr[i]>s1.top().first)
        {
            v1.push_back(s1.top().second);
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
            }
            else
            {
                v1.push_back(s1.top().second);
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
        }
        else if (s2.size()>0 && arr[i]>s2.top().first)
        {
            v2.push_back(s2.top().second);
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
            }
            else
            {
                v2.push_back(s2.top().second);
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
    }

    return *max_element(area,area+n);

}
int main() {
    int n=4,m=4;
    int in[n][m]={{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0}};
    int a[m];
    vector<int>vf;
    vf.push_back(MAH(in[0],m));
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (in[i][j]==0)
            {
                in[i][j]=0;
            }
            else{

            in[i][j]=in[i][j]+in[i-1][j];
            }
        }
        vf.push_back(MAH(in[i],m));
    }
    cout<<*max_element(vf.begin(),vf.end())<<endl;
    return 0;
}
