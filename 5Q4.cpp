#include<iostream>
using namespace std;
int main(){
    // step 1: create an integer variable
    int num =10;
    // step2: create a pointer to the integer variable
    int*ptr=&num;
    //step 3: create a pointer to the pointer
    int**doublePtr=&ptr;
    cout<<"Original value of num:"<<num<<endl;
    // Modification
    **doublePtr=20;
    cout<<"Modified value of num:"<<num<<endl;
    return 0;

}