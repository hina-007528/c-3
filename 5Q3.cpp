#include<iostream>
using namespace std;

int main(){
    const int SIZE=5;
    int array[SIZE]={1,2,3,4,5};
    // Example array
    int*ptr=array;
    // Pointer to the first element of the array
    int sum =0;
    // Iiterate over the array using the pointer
    for(int i=0;i<SIZE;i++){
        sum +=*(ptr +i);
        // Add the value pointed to by (ptr+ i) to sum
    }
    // Display the sum of the elements
    cout<<"The sum of the array elements is:"<<sum<<endl;
    return 0;
}