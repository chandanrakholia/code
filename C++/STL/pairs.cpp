#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    pair<int,string>p;
    cin>>p.first>>p.second;
    cout<<p.first<<" "<<p.second<<endl;
    int a[]={1,2,3};
    int b[]={4,5,6};
    pair<int,int>p_array[3];
    p_array[0]={1,4};
    p_array[1]={2,5};
    p_array[2]={3,6};
    cout<<"*********************"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    
    return 0;
}