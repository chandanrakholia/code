#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        int a[n];
        int b[n];
        int c[n];
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
        }
        if(n%2==0){
            for (int j = 0; j < 2; j++)
            {
                a[n-1-j]=b[j];
            }
            for (int j = 2; j < n; j++)
            {
                /* code */
            }
            
            
        }
        
        
    }
    
    return 0;
}