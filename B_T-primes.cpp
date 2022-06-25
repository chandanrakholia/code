#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void Tprime(long long int n){
    int count=1;
    int f=1;
    for (int i = 1; i < (n/2)+1; i++)
    {
        if (n%i==0)
        {
            count++;
            if (count>3)
            {
                cout<<"NO"<<endl;
                break;
            }
                      
        }
        
    }
    if (count==3)
    {
        cout<<"YES"<<endl;
    }
    else if (count<3)
    {
        cout<<"NO"<<endl;
    }
    
    
    
}

void isprime(long long int y){
    int f=0;
    for (int i = 2; i < (y/2)+1; i++)
    {
        if (y%i==0)
        {
            f=1;
            break;
        }
        
    }
    if (f==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
        long long int y=sqrt(x);
        isprime(y);
    }
    
    
    return 0;
}