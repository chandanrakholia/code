#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int j = 0; j < t; j++)
    {
        int n,q;
        cin>>n>>q;
        long long int arr[n];
        long long int arr2[q];
        long long int sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin>>arr2[i];
        }
        sort(arr, arr + n, greater<int>());

        for (int i = 0; i < q; i++)
        {
            long long int sum2=0;
            int co=0;
            if (sum<arr2[i])
            {
                cout<<-1<<endl;
            }
            else{
                for (int j = 0; j < n; j++)
                {
                    sum2=sum2+arr[j];
                    co++;
                    if (sum2>=arr2[i])
                    {
                        break;
                    }
                    
                }
                cout<<co<<endl;
                
            }
        }
                
    }
        
    return 0;
}