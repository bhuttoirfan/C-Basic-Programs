#include<iostream>
using namespace std;
int main() {
	int number, result;
	
	cout<<"Enter any number: ";
	cin>>number;
	
	result = (number % 2);
	
	switch(result) {
		case 0:
			cout<<"Number is even.";
			break;
		default:
			cout<<"Number is odd.";	
	}
	
	
	/*
	if( (number % 2) == 0 ){
		
		cout<<"Number is even.";
	
	}else {
	
		cout<<"Number is odd.";
	
	}
	*/
}
