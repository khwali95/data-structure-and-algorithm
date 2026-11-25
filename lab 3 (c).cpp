#include<iostream>
using namespace std;

int arr[50];
int n = 0;

void inputArray(){
    cout<<"Enter array size (1-50): ";
    cin>>n;
    while(n <=0 || n > 50){
        cout<<"Invalid size! Enter again (1-50): ";
        cin>>n;
    }
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++) cin>>arr[i];
}

void displayArray(){
    cout<<"Array: ";
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void sortArray(bool ascending){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(ascending){
                if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
            } else {
                if(arr[j] < arr[j+1]) swap(arr[j], arr[j+1]);
            }
        }
    }
    if(ascending) cout<<"Array sorted in Ascending order."<<endl;
    else cout<<"Array sorted in Descending order."<<endl;
}

bool isSortedAsc(){
    for(int i=0; i<n-1; i++) if(arr[i] > arr[i+1]) return false;
    return true;
}
bool isSortedDesc(){
    for(int i=0; i<n-1; i++) if(arr[i] < arr[i+1]) return false;
    return true;
}

void linearSearch(int key){
    int comp = 0, index = -1;
    for(int i=0; i<n; i++){
        comp++;
        if(arr[i] == key){ index = i; break; }
    }
    if(index != -1) cout<<"Linear: Found at index "<<index<<endl;
    else cout<<"Linear: Not found"<<endl;
    cout<<"Comparisons: "<<comp<<endl;
}

void binarySearchAsc(int key){
    if(!isSortedAsc()){
        cout<<"Array is not in Ascending order! Sorting first..."<<endl;
        sortArray(true);
        displayArray();
    }
    int low=0, high=n-1, comp=0, index=-1;
    while(low <= high){
        comp++;
        int mid = (low+high)/2;
        if(arr[mid] == key){ index=mid; break; }
        else if(key < arr[mid]) high = mid-1;
        else low = mid+1;
    }
    if(index != -1) cout<<"Binary Asc: Found at index "<<index<<endl;
    else cout<<"Binary Asc: Not found"<<endl;
    cout<<"Comparisons: "<<comp<<endl;
}

void binarySearchDesc(int key){
    if(!isSortedDesc()){
        cout<<"Array is not in Descending order! Sorting first..."<<endl;
        sortArray(false);
        displayArray();
    }
    int low=0, high=n-1, comp=0, index=-1;
    while(low <= high){
        comp++;
        int mid = (low+high)/2;
        if(arr[mid] == key){ index=mid; break; }
        else if(key < arr[mid]) low = mid+1; 
        else high = mid-1;
    }
    if(index != -1) cout<<"Binary Desc: Found at index "<<index<<endl;
    else cout<<"Binary Desc: Not found"<<endl;
    cout<<"Comparisons: "<<comp<<endl;
}

int main(){
    int choice, key;
    inputArray(); 

    do{
        cout<<"\n--- MENU ---\n";
        cout<<"1. Linear Search\n2. Binary Search (Ascending)\n3. Binary Search (Descending)\n4. Exit\n";
        cout<<"Enter choice (1-4): ";
        cin>>choice;

        if(choice >=1 && choice <=3){
            displayArray();
            cout<<"Enter search key: ";
            cin>>key;
            if(choice == 1) linearSearch(key);
            else if(choice == 2) binarySearchAsc(key);
            else if(choice == 3) binarySearchDesc(key);
        }
        else if(choice == 4){
            cout<<"Exiting program."<<endl;
        }
        else{
            cout<<"Invalid menu choice! Try again."<<endl;
        }

    }while(choice != 4);

    return 0;
}
