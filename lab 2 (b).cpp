#include<iostream>
#include <string>
using namespace std;

void triverse(string names[],int size) {
	cout<<" "<<endl;
    for(int i=size-1;i>=0;i--) {
    cout<<names[i]<<" ";
    if(i !=0) {
    cout<<",";
	}
  }
} 
int main() {
	string names[10] = {"sanaullah","beddie","azan","abdullah","saim"};
	int size = 5;
	
	triverse(names,5); 
	
	return 0;
}
























