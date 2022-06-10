#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int rows,col;
    cout<<"Enter number of rows :\n";
    cin>>rows;
    cout<<"Enter number of col :\n";
    cin>>col;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<'*';
        }
        cout<<endl;
        
    }
    
    return 0;
}