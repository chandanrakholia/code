#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        long long int x;
        cin>>x;
        for (long long int j = 0; j < x+1000; j++)
        {
            if (((x & j)>0) && ((x ^ j)>0))
            {
                cout<<j<<endl;
                break;
            }
            
        }
        
    }
    
    return 0;
}