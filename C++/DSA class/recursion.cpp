#include<iostream>
using namespace std;
int factorial(int n){
    if (n<=1)
    {
        return 1;
    }
    
    return n*factorial(n-1);
}
int fib(int x){
    if (x<2)
    {
        return 1;
    }
    
    return fib(x-2)+fib(x-1);
}
int main(){
    int a=5;
    // cout<<"Enter any number :";
    // cin>>a;
    cout<<"Factorial of "<<a<<" is :"<<factorial(a)<<endl;
    int b=5;
    cout<<"The fibonacci number at position "<<b+1<<": "<<fib(b)<<endl;
    return 0;
}