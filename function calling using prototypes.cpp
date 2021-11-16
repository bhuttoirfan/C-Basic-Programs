#include<iostream>
using namespace std;

// Function prototypes
void function1();
void function2();

int main() {
	
	function1();
}

void function1() {
	
	cout<<"Function 1"<<endl<<endl;

//	Will successfully call function2()
	function2();
}

void function2() {
	
	cout<<"Function 2"<<endl<<endl;
}