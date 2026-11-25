#include<iostream>
using namespace std;
void reverseArray(int arr[],int sz) {
	int start = 0, end =sz-1;
	
	while(start < end) {
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
int main() {
	int Arr[] = {93,4,5,6,7};
	int sz = 5;
	reverseArray(Arr,sz);
	for(int i=0;i<sz;i++) {
	cout<<Arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
