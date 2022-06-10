 #include<iostream>
 using namespace std;
 
 int main(){
     int k,n,w;
     cin>>k>>n>>w;
     int f;
     f=(w*(w+1)*k/2)-n;
     cout<<f;
     return 0;
 }