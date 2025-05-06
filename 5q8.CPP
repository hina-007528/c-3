#include<iostream>
using namespace std;
void copyArray(int *src,int *dest,int size){
    for(int i=0;i<size;++i){
        dest[i]= src[i];
    }
}
int main(){
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    int*sourceArray=new int[size];
    int*destinationArray=new int[size];
cout<<"Enter"<<" "<<size<<" "<<"integers for the source array:"<<endl;
    for(int i=0;i<size;++i){
        cin>>sourceArray[i];
    }
    // COPY ELEMENTS FROM SOURCE ARRAY TO DESTINATION ARRAY
    copyArray(sourceArray,
    destinationArray,size);
    cout<<"Contents of the destination array:"<<endl;
    for(int i=0;i<size;++i){
        cout<<destinationArray[i]<<"";
    }
cout<<endl;
delete[] sourceArray;
delete[] destinationArray;
return 0;
}