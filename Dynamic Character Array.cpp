#include<iostream>
using namespace std;

int main() {
	int size;
	
	cout<<"Enter size of array: ";
	cin>>size;
	
	char *dynArr= new char(size);
	
	cin>>dynArr;
	
	for(int i=0; dynArr[i] != '\0'; i++){
		cout<<dynArr[i];
	}
}