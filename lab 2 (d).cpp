#include<iostream>
using namespace std;

void insertAtIndex(int arr[], int &size, int index, int value){
    for(int i=size; i>index; i--){
        arr[i] = arr[i-1];
    }
    arr[index] = value;
    size++;
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[10] = {2,3,4,5,6};
    int size = 5;
    int index, value;

    cout<<"Array: ";
    printArray(arr,size);

    cout<<"\nEnter index (0-5): ";
    cin>>index;
    
    cout<<"Enter value to insert: ";
    cin>>value;

    insertAtIndex(arr, size, index, value);

    cout<<"New array: ";
    printArray(arr,size);

    return 0;
}
