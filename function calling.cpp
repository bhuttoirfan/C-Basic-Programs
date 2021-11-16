#include<iostream>
using namespace std;

void function1() {
	
	cout<<"Function 1"<<endl<<endl;

/********* Home Work */
// Calling same function
//	function()1;



//	can not call function one here cause it is defined below
//	function2();
}

void function2() {
	// Will Call function1() successfully
	function1();
	
	cout<<"Function 2"<<endl<<endl;
}

int main() {
	
	function2();
}