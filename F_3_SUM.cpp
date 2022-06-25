#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    for (int T = 0; T < t; T++)
    {
        int n;
        cin>>n;
        map<int,long long int>m;
        for (int i = 0; i < n; i++)
        {
            int p;
            cin>>p;
            p=p%10;
            m[p]=m[p]+1;
        }
        // int f=0;
        // for (int i = 0; i < n; i++)
        // {
        //     if (arr[i]%10==0)
        //     {
        //         continue;
        //     }
            
        //     for (int j = 0; j < n and j!=i; j++)
        //     {
        //         if (arr[j]%10==0)
        //         {
        //             continue;
        //         }
                
        //         for (int k = 0; k < n and k!=i and k!=j; k++)
        //         {
        //             if ((arr[i]+arr[j]+arr[k])%10==3)
        //             {
        //                 f=1;
        //                 break;
        //             }
                    
        //         }
                
        //     }
            
        // }
        // if (f==1)
        // {
        //     cout<<"YES"<<endl;
        // }
        // else
        // {
        //     cout<<"NO"<<endl;
        // }
        if (m[1]>=3 or (m[1]>0 and m[2]>0))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
        
        
        
    }
    
    return 0;
}