#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;
int func(queue<int>q1,queue<int>q2,int n)
{
    bool f = false;
    int temp2 = q1.front()-q2.front();
    int count = 1;
    while(n>0)
    {
        q1.pop();
        q2.pop();
        count+=1;
        if(temp2+q1.front()>=q2.front())
        {
            f = true;
        }
        else
        {
            f = false;
            break;
        }
        temp2 = temp2 + q1.front() - q2.front();
        n--;
    }
    if(f==true)
    {
        return 1;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    queue<int>q1;
    queue<int>q2;
    int i = 0;
    while(i<n)
    {
        int d;
        cin>>d;
        q1.push(d);
        i+=1;
    }
    int j = 0;
    while(j<n)
    {
        int d;
        cin>>d;
        q2.push(d);
        j+=1;
    }
    int count = 0;
    int n1 = n,n2 = n;
    while(n>0)
    {
        int a = 0;
        if(q1.front()>q2.front())
        {
            a = func(q1,q2,n1);
            if(a==1)
            {
                cout<<count;
                break;
            }
                count+=1;
                int temp = q1.front();
                int temp1 = q2.front();
                q1.pop();
                q2.pop();
                q1.push(temp);
                q2.push(temp1);
        }
        if(count>=n2)
        {
            cout<<-1;
            break;
        }
        else 
        {
            count+=1;
            int temp = q1.front();
            int temp1 = q2.front();
            q1.pop();
            q2.pop();
            q1.push(temp);
            q2.push(temp1);
        }
        n--;
    }
}