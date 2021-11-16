#include<iostream>
using namespace std;

int main() {

	//Q
	// C++  Program to find the maximum between two numbers. 
	
	int number, number2;
	
	cout<<"Enter any number:";
	cin>>number;
	cout<<"Enter any number:";
	cin>>number2;
	
	int result = number > number2;
	
	switch(result) {
		case 1:
			cout<<number<<" is maximum number.";
			break;
		default:
			cout<<number2<<" is maximum number";
	}	
	
	/*
	if(number > number2){
		cout<<number<<" is maximum number.";
	}else {
		cout<<number2<<" is maximum number";
	}
	*/
	
	
	
	
	
	
}
