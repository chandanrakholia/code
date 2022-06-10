#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int n;cin>>n;
    queue<pair<int,int>>q;
    int countx=0;
    int county=0;
    for (auto i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        q.push({x,y});
        countx=countx+x;
        county=county+y;
    }
    int count=0;
    for (auto i = 0; i < n; i++)
    {
        if ((q.front().first) < (q.front().second))
        {
            q.push({q.front().first,q.front().second});
            q.pop();
            count++;
        }
        
    }
    if (count>0 and count!=n and countx>=county)
    {
        cout<<count<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
    
    
    
    return 0;
}