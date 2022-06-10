#include<iostream>
using namespace std;
int main(){
    string name[]={"Rohit","Dhoni","Jadeja","Virat"};
    int run[]={40,60,90,52};
    int balls[]={30,20,40,60};
    int x=sizeof(name)/sizeof(name[0]);
    float st=0;
    string mom;
    for (int i = 0; i < x; i++)
    {
        float st1=run[i]/balls[i];
        if (run[i]>50 && st1>st)
        {
            st=st1;
            mom=name[i];
        }
        cout<<mom;
    }
    return 0;
}