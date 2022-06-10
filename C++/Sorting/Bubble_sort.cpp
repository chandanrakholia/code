#include<iostream>
using namespace std;
void Bubblesort(int a[],int n){
    for (int pass=n-1;pass>=0;pass--)
    {
        for (int i = 0;i < pass-1;i++)
        {
            if (a[i]>a[i+1])
            {//swap elements
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
            
        }
        
    }
    
}

void BubblesortImproved(int a[],int n){
    int pass,i,temp,swapped=1;
    for (pass= n-1;pass>=0 && swapped;pass--)
    {
        swapped=0;
        for (int i = 0; i <=pass; i++)
        {
            if (a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                swapped=1;
            }
            
        }
        
    }
    
}