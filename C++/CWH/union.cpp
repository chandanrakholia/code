#include<bits/stdc++.h>
#include<iostream>
using namespace std;

union money
{
    int rice;
    char c;
    int car;
};

int main(){
    union money m1;
    m1.rice=101;
    // m1.c='a';--------> uncommentting this gives garbage value
    cout<<m1.rice<<endl;
    return 0;
}