#include<iostream>
using namespace std;

int main(){
    int roll, n, key;
    int arr[50];
    
    cout<<"Enter your roll number: ";
    cin>>roll;

    bool isEven = (roll % 2 == 0);
    
    if(isEven) cout<<"Roll is Even -> Ascending sort"<<endl;
    else cout<<"Roll is Odd -> Descending sort"<<endl;

    cout<<"Enter array size n: ";
    cin>>n;

    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++) cin>>arr[i];

    for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
        if(isEven){
                
        if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
    } else {
                
                if(arr[j] < arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
            }
        }
    }
}

    cout<<"Sorted array: ";
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;

    cout<<"Enter search key: ";
    cin>>key;

    int low = 0, high = n-1;
    int comparisons = 0;
    int foundIndex = -1;

    while(low <= high){
        comparisons++;
        int mid = (low + high) / 2;

        if(arr[mid] == key){
            foundIndex = mid;
            break;
        }

        if(isEven){
            
            if(key < arr[mid]) high = mid - 1;
            else low = mid + 1; 
        } else {
            
            if(key < arr[mid]) low = mid + 1; 
            else high = mid - 1;      }
    }
    if(foundIndex != -1) cout<<"Found at index: "<<foundIndex<<endl;
    else cout<<"Not found"<<endl;
    
    cout<<"Number of comparisons: "<<comparisons<<endl;

    return 0;
}
