#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,4,54,49};
    for (int i = 0; i < 5; i++)
    {int max=0,t;
        for (int j = i; j < 5; j++)
        {
            if (arr[j]>max)
            {
                max=arr[j];
                t=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[t];
        arr[t]=temp;
    }
    for (int v = 0; v < 5; v++)
    {
        cout<<arr[v]<<endl;
    }
    return 0;
}