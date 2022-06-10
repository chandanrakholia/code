// #include<iostream>
// using namespace std;
// int linearSearch(int arr[],int n,int key){
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]==key)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<linearSearch(arr,n,key);
//     return 0;
// }
#include<iostream>
#include<cmath>
using namespace std;
string prime(int n){
    for (int i = 2; i < (n+1)/2; i++)
    {
        if (n%i==0)
        {
        return "NA";
        }
    }
    return "PRIME";
}
string armstrong(int n){
    int sum=0;
    int x=n;
    int length=0;
    while (n>0){
        length=length+1;
        n=n/10;
    }
    while(x>0){
        sum=sum+pow(x%10,length);
        x=x/10;
    }
    if (sum==n)
    {
        return "ARMSTRONG";
    }
    return "NA";
}
    int main(){
    cout<<prime(11)<<endl;
    cout<<armstrong(11)<<endl;
    return 0;
}