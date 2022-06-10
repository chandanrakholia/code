#include<iostream>
using namespace std;
int fibonacci(int x){
    int arr[x]={};
    arr[0]=0;
    arr[1]=1;
    if (x>2)
    {
    for (int i = 0; i < x-2; i++)
    {
        arr[i+2]=arr[i+1]+arr[i];
    }
    for (int j = 0; j < x-1; j++)
    {
        cout<<arr[j]<<" ";
    }
    }
    return arr[x-1];
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}