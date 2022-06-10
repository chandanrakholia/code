#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int a=s[0];
    int count=0;
    if (a>=90)
    {
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i]<=90)
            {
            count++;
            }
            
        }
        if (count==s.length()-1)
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i]<=90)
                {
                    str=str+char(ints[i])
                }
                
            }
            
        }
        
        
    }
     
    return 0;
}