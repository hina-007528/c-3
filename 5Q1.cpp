#include<iostream>
using namespace std;

// Function prototypes
void displayArray(int*array,int size);
int findlargestElement(int*array,int size);

int main(){
    int size;
    int*array;
    // input the size of the array
    cout<<"Enter  the size of the array:";
    cin>>size;
    // Dynamically allocate memory for the array
    array=new int[size];
    // input the element of array
    cout<<"enter"<<size<<"Element of array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    // Display the element of array
    cout<<"Element of the array:"<<endl;
    // find  and display the largest element in the array
    int largest=
    findlargestElement(array,size);
    cout<<"The largest Element in the array is:"<<largest<<endl;
    // Free the allocated memory
    delete[] array;
    return 0;
}
// Function to display te elements of the array
void displayArray(int*array,int size){
for(int i=0;i<size;i++){
    cout<<array[i]<<" ";
}
cout<<endl;}
// function to find largest element in the array
int findlargestElement(int*array,int size){
    int largest=array[0];
    for(int i=1;i<size;i++){
        if(array[i]>largest){
            largest =array[i];
        }
    }
    return largest;
}
