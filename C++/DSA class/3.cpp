#include<iostream>
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
        int odd;
        int even;
        if (n%2==0)
        {
            even=n/2;
            odd=n/2;
        }
        else{
            odd=(n-1)/2;
            even=(n+1)/2;
        }
        int counte=0;
        int counte1=0;
        int counto=0;
        int counto1=0;
        // for (int i = 0; i < n; i=i+2)
        // {
        //         if (arr[i]%2==0)
        //         {
        //             counte++;
        //         }
        //         if (arr[i]%2!=0)
        //         {
        //             counte1++;
        //         }
        //         if (arr[i]%2==0)
        //         {
        //             counto++;
        //         }
        //         if (arr[i]%2!=0)
        //         {
        //             counto1++;
        //         }               
                
        // }
        // if ((counte==odd)or(counte==even)or(counte1==odd)or(counte1==even))
        // {
        //     cout<<"YES"<<endl;
        // }
        // else
        // {
        //     cout<<"NO"<<endl;
        // }
        if (arr[0]%2==0)
        {
            for (int i = 0; i < n; i=i+2)
            {
                if (arr[i]%2==0)
                {
                    counte++;
                }
                
            }
            
        }
        else{
            for (int i = 0; i < n; i=i+2)
            {
                if (arr[i]%2!=0)
                {
                    counte1++;
                }
                
            }
            

        }
                if (arr[1]%2==0)
        {
            for (int i = 1; i < n; i=i+2)
            {
                if (arr[i]%2==0)
                {
                    counto++;
                }
                
            }
            
        }
        else{
            for (int i = 1; i < n; i=i+2)
            {
                if (arr[i]%2!=0)
                {
                    counto1++;
                }
                
            }
            

        }
        if (((counte==even) ||(counte1==even))&&((counto==odd) ||(counto1==odd)))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
        
    }
    
    return 0;
}