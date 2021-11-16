#include<iostream>
using namespace std;
int main() {
	
	char sign;
	float num1,num2,result;
	
	cout<<"Which operation do you want to perform: ";
	cin>>sign;
	
	cout<<"Enter any number: ";
	cin>>num1;
	cout<<"Enter any number: ";
	cin>>num2;
	
	switch(sign){
		case '+':
			cout<<"The result is: "<<num1 + num2;
			break;
		case '-':
			cout<<"The result is: "<<num1 - num2;
			break;
		case '*':
			cout<<"The result is: "<<num1 * num2;
			break;
		case '/':
			cout<<"The result is: "<<num1 / num2;
			break;
		default:
			cout<<"You have entered invalid operation.";
	}
	
	
	
}
