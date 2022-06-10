#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void func(int n){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if (n==0)
    {
        return;
    }
    func(n/10);
    cout<<arr[n%10]<<" ";
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    func(n);
    return 0;
}