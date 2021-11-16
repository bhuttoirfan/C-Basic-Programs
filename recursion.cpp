#include<iostream>
using namespace std;

int factorial(int num);

int main() {
	
	int num = factorial(3);
	cout<<endl<<endl<<"The number is: "<< num;
}

int factorial(int num) {
	
	cout<<"Factorial"<<endl;
	
	if(num > 0) {
		
		factorial(num-1);
	}else return num;
}