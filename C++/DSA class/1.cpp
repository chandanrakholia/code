#include<iostream>
using namespace std;

int main(){
    cout<<"Hello world"<<endl;
    int v[5]={1,2,3,4,5};
    int temp, i=0;
    while (i<3)
    {
        temp=v[i];
        v[i]=v[4-i];
        v[4-i]=temp;
        i++;
    }
    int j=0;
    while(j<5)
    {
        cout<<v[j];
        j++;
    }
    // cout<<v;
    return 0;
}