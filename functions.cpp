#include<iostream>
using namespace std;

// Defining function
int sum() {
	int a,b;
	int addition;
	
	cout<<"Enter the numbers: ";
	cin>>a>>b;
	
	addition = a+b;
	return addition;
	
//	you can also do it this way
//	return a+b;
}

int main() {
	int addition;
	cout<<"This is main"<<endl<<endl;
	
	for(int i=0; i<3; i++) {
		
		// Calling Function
		addition = sum();
		cout<<"The sum is: "<<addition<<endl;	
	}
	
}