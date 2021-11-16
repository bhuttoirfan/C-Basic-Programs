#include<iostream>
using namespace std;

int factorial(int num);
int main() {
	
	int num, result;
	cout<<"Enter the number you want to find the factorial of: ";
	cin>>num;
	
//	result = factorial(num);
	cout<<endl<<endl<<"Factorial of "<<num<<" is: "<<factorial(num);
}

int factorial(int num) {

	if(num > 1)	return num * factorial(num-1);
	else	return num;
}