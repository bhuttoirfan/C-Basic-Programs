#include<iostream>
using namespace std;

int main() {
	char ch;
	
	double num1, num2;
	
	cout<<"Enter the sign of the operation you want the program to perform:";
	cin>>ch; // +, -, * ,/
	
	cout<<"Enter the numbers: ";
	cin>>num1>>num2;
	
	double division = num1 / num2;	
	
	switch(ch) {
		case '+':
			cout<<endl<<"The sum is: "<<num1+num2;
			break;
			
		case '-':
			cout<<endl<<"The subtraction is :"<<num1-num2;
			break;
			
		case '*':
			cout<<endl<<"The multiplication is :"<<num1*num2;
			break;
				
		case '/':
			cout<<endl<<"The division is :"<<division;
			break;
			
		default:
			cout<<endl<<"Invalid operation";
	}
	
}