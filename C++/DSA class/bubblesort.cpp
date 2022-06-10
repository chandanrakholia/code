#include<iostream>
using namespace std;

int main(){
    int arr[4]={1,2,3,4};
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
        if (arr[j]<arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }
        for (int k = 0; k < 4; k++)
        {
            cout<<arr[k]<<endl;
        }
    return 0;
}