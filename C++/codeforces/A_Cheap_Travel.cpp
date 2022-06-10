#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int sum=0;
    if (n>=m)
    {
        if (b>=a)
        
{        if (b*10*.1/m<=a)
        {
            sum=(n/m)*b+(n%m)*a;
            cout<<sum<<endl;
        }
        else
        {
            sum=((n/m)+1)*b;
            cout<<sum<<endl;
        } }
        else{
        //     if (b*10*.1/m<=a)
        // {
            if (m==1)
            {
            sum=((n/m))*b;
            cout<<sum<<endl;
            // cout<<"this";
            }
            else
            {
                            sum=((n/m)+1)*b;
            cout<<sum<<endl;
            }
            
            

            // cout<<"this";
        // }
        // else
        // {
        //     sum=((n/m)+1)*b;
        //     cout<<sum<<endl;
        // }
        }
    }
    else
    {
        if (b>=a)
        {
            sum=n*a;
            cout<<sum<<endl;
        }
        else
        {
            sum=n*b;
            cout<<sum<<endl;
        }
    }

    return 0;
}