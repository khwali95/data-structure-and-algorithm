#include<iostream>
using namespace std;
int main(){
    int n, key;
    int arr[50];
    int comparisons = 0;
    int foundIndex = -1;
    cout << "Enter array size n (max 50): ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter search key: "<<endl;
    cin >> key;
    for(int i = 0; i < n; i++){
        comparisons++;
        if(arr[i] == key){
            foundIndex = i;
        
    }
}
    if(foundIndex != -1){
        cout << "Found at index: " << foundIndex << endl;
    } else {
        cout << "Not found" << endl;
    }
    cout << "Number of comparisons: " << comparisons << endl;

    return 0;
}
