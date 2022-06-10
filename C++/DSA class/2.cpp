#include<iostream>
using namespace std;

int main(){
    string s="AB";
    s[1]=char((int)s[1]+32);
    cout<<s[1];
    return 0;
}