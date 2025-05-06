#include<iostream>
#include<string>
using namespace std;
void displayStrings(char*arr[],int size){
    cout<<"All strings are:";
    for(int i=0;i<size;++i){
cout<<"String"<<i+1<<":"<<arr[i];
    }
    }
    void freememory(char*arr[],int size){
        for(int i=0;i<size;i++)
        {
    delete[] arr[i];
    }
}
int main(){
    int size;
    cout<<"Enter the number of strings:";
    cin>>size;
    char*arr[size];
    for(int i=0;i<size;i++){
        arr[i]=new char[100];
    }
    for(int i=0;i<size;i++)
      {
        cout<<"enter string"<<i+1<<":"<<endl;
        cin>>arr[i];
      }
      displayStrings(arr,size);
       displayStrings(arr,size);
    return 0;

}
