#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int tprime(long long int n){
    int f=0;
    for (int i = 2; i < sqrt(n)+1; i++)
    {
        if (n%i==0)
        {
            f=1;
            break;
        }
        
    }
    if (f==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin>>x;
        float p=sqrt(x);
        if (tprime(p)==1)
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