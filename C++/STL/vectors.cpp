#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printvec(vector<int>&v){
    cout<<"size "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v(7,1);
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     v.push_back(i);
    // }
    v.push_back(5);
    v.push_back(6);
    v.pop_back();
    printvec(v);
    return 0;
}