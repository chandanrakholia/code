#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct employee
{
    int eID;
    float salary;
    char fav;
};

int main(){
    struct employee harry,shubham;
    harry.eID=1010;
    harry.salary=9999;
    harry.fav='h';
    shubham.eID=10;
    shubham.salary=999;
    shubham.fav='s';
    cout<<harry.eID<<endl;
    cout<<harry.salary<<endl;
    cout<<harry.fav<<endl;

    cout<<"----------"<<endl;
    cout<<shubham.eID<<endl;
    cout<<shubham.salary<<endl;
    cout<<shubham.fav<<endl;

    return 0;
}