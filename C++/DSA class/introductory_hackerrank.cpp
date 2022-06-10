// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a positive integer:";
//     cin>>n;
//     bool flag=true;
//     for (int i = 2; i < n; i++)
//     {
//         if (n%i==0)
//         {
//             flag=false;
//         }
//     }
//     if (flag=true)
//     {
//         cout<<"yes";
//     }
//     else{
//         cout<<"no";
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cin>>a;
//     cin>>b;
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b;
//     return 0;
// }
// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     int m,n;
//     cin>>m;
//     cin>>n;
//     int ans=m;
//     cout<<pow(m,n);
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cin>>a;
//     cin>>b;
//     if (a>b)
//     {
//         cout<<a;
//     }
//     else{
//         cout<<b;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     while(n>0){
//         sum=sum+n%10;
//         n=n/10;
//     }
//     // cout<<sum;
//     if (sum%7==0)
//     {
//         cout<<"YES";
//     }
//     else{
//         cout<<"NO";
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n]={};
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     for (int j = 0; j < (n)/2; j++)
//     {
//         int temp=arr[j];
//         arr[j]=arr[n-1-j];
//         arr[n-1-j]=temp;
//     }
//     cout<<arr[0];
//     for (int k = 1; k < n; k++)
//     {
//         cout<<" "<<arr[k];
//     }
    
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int max_array(int arr[],int n){
//     int max=arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]>arr[0])
//         {
//             max=arr[i];
//         }
//     }
//     return max;
// }
// int min_array(int arr[],int n){
//     int min=arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]<arr[0])
//         {
//             min=arr[i];
//         }
//     }
//     return min;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n]={};
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<max_array(arr,n)<<endl;
//     cout<<min_array(arr,n);
//     return 0;
// }
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string n;
    for (int i = 0; i < n; i++)
    {
        
    }
    
    return 0;
}