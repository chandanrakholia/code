// #include <iostream>
// using namespace std;
// int main() {
//     // prints the string enclosed in double quotes
//     cout << "This is C++ Programming";
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int num1 = 70;
//     double num2 = 256.783;
//     char ch = 'A';
//     cout << num1<<endl;    // print integer
//     cout << num2 << endl;    // print double
//     cout << "character: " << ch << endl;    // print char
//     cout <<"Hello World"<<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout << "Enter an integer: ";
//     cin >> num;   // Taking input
//     cout << "The number is: " << num<<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     char a;
//     int num;
//     cout << "Enter a character and an integer: ";
//     cin >> a >> num;
//     cout << "Character: " << a << endl;
//     cout << "Number: " << num<<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int num_int=9;
//     double num_double;
//     num_double=num_int;
//     cout<<"num_int = "<<num_int<<endl;
//     cout<<"num_double = "<<num_double<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {cout<<"Hello World"<<endl;return 0;}

// #include<iostream>
// using namespace std;
// int main(){
//     int a=14,b=15;
//     float pi=3.14;
//     char c ='t';
//     cout<<"this is tutorial 4.\nHere the value of a is "<<a<<"\nThe value of b is "<<b;
//     cout<<"\nThe value of pi is: "<<pi;
//     cout<<"\nThe value of c is:"<<c<<endl;
//     return 0;

// }
// #include<iostream>
// using namespace std;
// int glo=6;
// void sum(){
//     int a;
//     cout<<glo;
// }
// int main(){
//     int glo=9;
//     glo=78
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2;
//     cout<<"enter the value of num1:\n";
//     cin>>num1;
//     cout<<"enter the value of num2:\n";
//     cin>>num2;
//     cout<<"the sum is: "<<num1+num2<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter value of a(positive no.) :";
//     cin>>a;
//     cout<<"enter value of b(positive no.) :";
//     cin>>b;
//     cout<<"the value of a+b:"<<a+b<<endl;
//     cout<<"the value of a-b:"<<a-b<<endl;
//     cout<<"the value of a/b:"<<a/b<<endl;
//     cout<<"the value of a*b:"<<a*b<<endl;
//     cout<<"the value of a%b:"<<a%b<<endl;
//     cout<<(a==b)<<endl;
//     cout<<(!(a==b))<<endl;
//     cout<<a++<<endl;
//     cout<<""<<endl;
//     cout<<a<<endl;
//     cout<<++a<<endl;
//     cout<<((a==b) && (a<b))<<endl;
//     cout<<"the value of ((a==b)||(a<b))"<<((a==b)||(a<b))<<endl;
//     return 0;
// }

// // There are two types of header files:
// // 1. System header files: It comes with the compiler
// #include<iostream>
// // 2. User defined header files: It is written by the programmer
// // #include "this.h" //--> This will produce an error if this.h is no present in the current directory

// using namespace std;

// int main(){
//     int a=4, b=5;
//     cout<<"Operators in C++:"<<endl;
//     cout<<"Following are the types of operators in C++"<<endl;
//     // Arithmetic operators
//     cout<<"The value of a + b is "<<a+b<<endl;
//     cout<<"The value of a - b is "<<a-b<<endl;
//     cout<<"The value of a * b is "<<a*b<<endl;
//     cout<<"The value of a / b is "<<a/b<<endl;
//     cout<<"The value of a % b is "<<a%b<<endl;
//     cout<<"The value of a++ is "<<a++<<endl;
//     cout<<"The value of a-- is "<<a--<<endl;
//     cout<<"The value of ++a is "<<++a<<endl;
//     cout<<"The value of --a is "<<--a<<endl;
//     cout<<endl;

//     // Assignment Operators --> used to assign values to variables
//     // int a =3, b=9;
//     // char d='d';

//     // Comparison operators
//     cout<<"Following are the comparison operators in C++"<<endl;
//     cout<<"The value of a == b is "<<(a==b)<<endl;
//     cout<<"The value of a != b is "<<(a!=b)<<endl;
//     cout<<"The value of a >= b is "<<(a>=b)<<endl;
//     cout<<"The value of a <= b is "<<(a<=b)<<endl;
//     cout<<"The value of a > b is "<<(a>b)<<endl;
//     cout<<"The value of a < b is "<<(a<b)<<endl; 

//     // Logical operators
//     cout<<"Following are the logical operators in C++"<<endl;
//     cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl; 
//     cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl; 
//     cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl; 


//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5,b=2;
//     int c =a*b;
//     cout<<c;
//     return 0;
// }
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//     int a=4,b=4444;
//     cout<<setw(4)<<a<<endl;
//     cout<<setw(4)<<b<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     const int a=5;
//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hello Dear"<<endl;
//     int age;
//     cout<<"Enter your Age :";
//     cin>>age;
//     // if((age>18)&&(age<50)){
//     //     cout<<"you are above 18 and below 50";
//     // }
//     // else if(age>50){
//     //     cout<<"you are above 50";
//     // }
//     // else{
//     //     cout<<"hello your age is:"<<age<<endl;
//     // }
//     switch (age)
//     {
//     case 22:
//         cout<<"you are 22";
//         break;
//     case 50:
//         cout<<"You are 50";
//         break;
//     default:
//         cout<<"No comments on your age";
//         break;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
// //    for(initialisation;condtion;updation) 
//     // for (int i = 0; i < 10; i++)
//     // {
//     //     cout<<i<<endl;

//     // }
//     // int i=0;
//     // while(true){
//     //     cout<<i<<endl;
//     //     i++;
//     // }
//     // cout<<"Table of 6"<<endl;
//     // for(int i =1;i<11;i++){
//     //     cout<<i*6<<endl;
//     // }
//     // cout<<"Table of 6"<<endl;
//     // int i =1;
//     // while(i<11){
//     //     cout<<6*i<<endl;
//     //     i++;
//     // }
//     // int i =1;
//     // do
//     // {
//     //     cout<<i*6<<endl;
//     //     i++;
//     // } while (i<11);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int rows=6;
//     for(int i = 1; i <= rows; ++i){
//         for(int j = 1; j <= i; ++j){
//             cout << "* ";
//             }
//             cout << "\n";
//             }
//             return 0;
//             }
// #include<iostream>
// using namespace std;

// int main(){
//     for (int i = 0; i < 5; i++)
//     {
//         if(i==1){
//             continue;
//         }
//         cout<<i;
//     }
    
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     // What is a pointer? ----> Data type which holds the address of other data types
//     int a=3;
//     int* b=&a;

//     // & ---> (Address of) Operator
//     cout<<"The address of a is "<<&a<<endl;
//     cout<<"The address of a is "<<b<<endl;

//     // * ---> (value at) Dereference operator
//     cout<<"The value at address b is "<<*b<<endl;

//     // Pointer to pointer
//     int** c = &b;
//     cout<<"The address of b is "<<&b<<endl;
//     cout<<"The address of b is "<<c<<endl; 
//     cout<<"The value at address c is "<<*c<<endl; 
//     cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a=3;
//     int* b;
//     b=&a;
//     cout<<"The address of a is "<<&a<<endl;
//     cout<<"The address of a is "<<b<<endl;
//     cout<<"Teh value at address b is "<<*b<<endl;
//     int**c=&b;
//     cout<<"The address of b is "<<&b<<endl;
//     cout<<"The address of b is "<<c<<endl;
//     cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int marks[4] ={10,20,30,40};
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     marks[2]=80;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
//     // for ( int i = 0; i < 4; i++)
//     // {
//     //     cout<<marks[i]<<endl;
//     // }
//     // for (int i = 0; i < 4; i++)
//     // {
//     //     cout<<"The value of marks["<<i<<"] is :"<<marks[i]<<endl;
//     // }
//     // int i=0;
//     // while (i<4)
//     // {
//     //     cout<<marks[i]<<endl;
//     //     i++;
//     // }
//     cout<<marks<<endl;
//     // cout<<&marks<<endl;
//     int* p=marks;
//     // cout<<*(p++)<<endl;
//     // cout<<*(++p)<<endl;
//     cout<<"The value of *p is "<<*p<<endl;
//     cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
//     cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
//     cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int sum(int a,int b);
// int main(){
//     int a;
//     int b;
//     cin>>a;
//     cin>>b;
//     cout<<sum(a,b);
//     return 0;
// }
// int sum(int a,int b){
// int c=a+b;
// return c;
// }
