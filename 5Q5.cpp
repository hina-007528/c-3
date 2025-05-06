#include<iostream>
#include<cstring>
using namespace std;
// Structure for student
struct Student{
    char name[50];
    int age;
char grade;
};
int main(){
    // Dynamically allocate memory for a student  record
    Student *studentPtr=new Student;
    // initialize student record;
    strcpy(studentPtr->name,"Alice Johnson");
    studentPtr->age=20;
    studentPtr->grade='A';
    // Display the contents of the student record
    cout<<"Student Name:"<<studentPtr->name<<endl;
    cout<<"Student Age:"<<studentPtr->age<<endl;
    cout<<"Student grade:"<<studentPtr->grade<<endl;
    // Free the memory
    delete studentPtr;
    return 0;
}