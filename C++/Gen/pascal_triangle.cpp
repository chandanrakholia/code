// pascal triangle as follows
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// .........

// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

int fac(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*fac(n-1);
    }
}
int main(){
    int x;
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<fac(i)/(fac(i-j)*fac(j))<<' ';
        }
        cout<<endl;
    }
    
    return 0;
}