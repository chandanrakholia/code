// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+n);
        int count=0;
        int p;
        for (int k = 0; k < n-2; k++)
        {
            if(arr[k]==arr[k+1] && arr[k+1]==arr[k+2]){
                count++;
                p=arr[k];
            }
            if(count==3)
            break;
        }
        if(count==0)
        cout<<-1<<endl;
        else
        cout<<p<<endl;
    }
    return 0;
}