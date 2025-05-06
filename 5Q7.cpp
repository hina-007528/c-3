#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int subtract(int a,int b){
    return a-b;
}
int multiply(int a,int b){
    return a*b;
}
int devide(int a,int b){
    if(b==0)
    {
        cout<<"Error! denominator must not be equal to zero"<<endl;
    }
    return a/b;
}
// Function pointer
int(*performoperation)(int,int);
int main()
{
    int h;
    cout<<"Enter 1st digit:"<<endl;
    cin>>h;
    char operation;
    cout<<"Enter operation(+,-,*,/)"<<endl;
    cin>>operation;
    int s;
    cout<<"Enter 2nd digit:"<<endl;
    cin>>s;
    switch(operation)
    {
        case '+':
       performoperation=add;
        break;
         case '-':
       performoperation=subtract;
        break;
         case '*':
       performoperation=multiply;
        break;
         case '/':
       performoperation=devide;
        break;
        default:
        cout<<"Eneter pointed operation!thanks"<<endl;
        break;
    }
    int result=performoperation(h,s);
    cout<<"Result"<<result;
    return 0;
}