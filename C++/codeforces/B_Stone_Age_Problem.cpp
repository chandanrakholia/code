#include<bits/stdc++.h>
#include<iostream>
using namespace std;

long long suma(int arr[],int n){
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        arr[i]=a;
    }
    for (int i = 0; i < q; i++)
    {
        int x;
        cin>>x;
        if (x==1)
        {
            int y,z;
            cin>>y>>z;
            arr[y-1]=z;
            long long e=suma(arr,n);
            cout<<e<<endl;
        }
        else if(x==2){
            int p;
            cin>>p;
            for (int k = 0; k < n; k++)
            {
                arr[k]=p;
            }
            long long e=suma(arr,n);
            cout<<e<<endl;
        }
    }
    
    return 0;
}