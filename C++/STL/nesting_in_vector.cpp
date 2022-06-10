#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printvec(vector<pair<int,int>>&v){
    cout<<"size "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}

int main(){
    vector<pair<int,int>>v={{1,2},{3,4}};
    printvec(v);
    return 0;
}