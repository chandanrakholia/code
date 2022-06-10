#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class student{
    public:
    int p,c,m;
    void cgpa(/*int p,int c,int m*/){
        float cg=(p+c+m)/3.0;
        cout<<"CGPA of student is :"<<cg;
    }
};

int main(){
    
        student rahul;
        rahul.p=10;
        rahul.c=10;
        rahul.m=8;
        rahul.cgpa();

    return 0;
}