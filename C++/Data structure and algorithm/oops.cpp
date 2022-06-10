#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout<<"name ="<<name<<endl;
        cout<<"age ="<<age<<endl;
        cout<<"gender ="<<gender<<endl;
    }
};
int main(){
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout<<"name: ";
        cin>>arr[i].name;
        cout<<"age: ";
        cin>>arr[i].age;
        cout<<"gender: ";
        cin>>arr[i].gender;
    }
    cout<<"****************printing*******************"<<endl;
    for (int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }
    cout<<"********************printed*****************"<<endl;
    return 0;
}