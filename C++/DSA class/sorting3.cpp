#include<iostream>
using namespace std;

int main(){
    string a="Rohan Sohan Nohan";
    string str ="";
    int k=0;
    string b[3]={};
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i]!=' ')
        {
            str=str+a[i];
        }
        else{
            b[k]=str;
            str="";
            k++;
        }
    }
    return 0;
}