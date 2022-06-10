#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void func(int a){
    cout<<a<<endl;
}

int main(){
    // for (int i = 0; i < 10; i++)
    // cout<<i<<endl;
    int a=32565;
    int* p=&a;
    int** x=&p;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<(&p)<<endl;
    cout<<(x)<<endl;
    return 0;
}
