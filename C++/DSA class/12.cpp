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
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int count=1;
        int a =arr[0];
        int flag =0;
        for (int i = 1; i < n; i++)
        {
            if(arr[i]==a)
            count++;
            if(count==3){
                flag=1;
            break;
            }
            else
            count=1;
            a=arr[i];


        }
        if(flag==1)
        cout<<a<<endl;
        else
        cout<<-1<<endl;
        
    }
    
    return 0;
}