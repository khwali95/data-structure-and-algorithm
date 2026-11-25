#include<iostream>
#include <string>
using namespace std;

void insert(string names[],int &size,string newName) {
	names[size] = newName;
	size++;
}
void triverse(string names[],int size) {
    for(int i=size-1;i>=0;i--) {
    cout<<names[i];
    if(i !=0)
    cout<<",";
	}
} 
int main() {
	string names[10] = {"sanaullah","beddie","azan","abdullah","saim"};
	int size = 5;
	insert(names,size,"alaf");
	
	triverse(names,size); 
	
	return 0;
}
