#include <iostream>
using namespace std;

class student
{ public:
    string name, surname;
    int p,c,m;
    
    student(int aaa, int bbb, int ccc, string aa, string bb)
    {
        p=aaa;
        c=bbb;
        m=ccc;
        name=aa;
        surname=bb;
        
    }
    float CGPA (int a, int b, int c)
    { float d;
        d= (float(a)+float(b)+float(c))/3;
        return d;
    }
};

// Driver Program to test above function
int main()
{
	student vinit(9,10,10,"vinit","jakhetiya");
	
cout<<vinit.CGPA(vinit.p,vinit.c,vinit.m);
}

