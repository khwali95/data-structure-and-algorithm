#include<iostream>
using namespace std;
int main() {
    int Arr[5] = {1,2,3,4,5};
    int sz = 5;
	int target = 7;
    for(int i=0;i<sz;i++) {
	if(Arr[i] == target) {
	cout <<"key found";
    return Arr[i];
}
	} 
	cout <<"key not found";
    return 0;
}