#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool checksorted(int arr[],int index,int n){
    if (index>n)
    {
        return true;
    }
    if (arr[index]<arr[index-1])
    {
        return false;
    }
    return checksorted(arr,index+1,n);
    
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    // cout<<"enter the size of arry : "<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bool ans=checksorted(arr,1,n);
    // cout<<ans<<endl;
    if (ans==1)
    {
        cout<<"array is sorted"<<endl;
    }
    else
    {
        cout<<"array is unsorted"<<endl;
    }
    
    
    
    return 0;
}