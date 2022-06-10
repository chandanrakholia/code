#include<iostream>
using namespace std;

int main(){
    string a[3]={"MohanDevi","Sohan","Rohan"};
    for (int i = 0; i < 3; i++)
    {int max=0,t;
        for (int j = 0; j < 3; j++)
        {
            if (int(a[j][0])>max)
            {
                max=int (a[j][0]);
                t=j;
            }
        }
        string temp=a[i];
        a[i]=a[t];
        a[t]=temp;
    }
    for (int v = 0; v < 3; v++)
    {
        cout<<a[v]<<endl;
    }
    
    return 0;
}