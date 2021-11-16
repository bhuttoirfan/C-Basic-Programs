#include<iostream>
using namespace std;

int main() {
	
	int ***tpointer, **dpointer, *pointer, num = 100;
	
	dpointer = &pointer;
	pointer = &num;
	
	**dpointer = 13;
	
	cout<<"Value of num after updating double pointer is: "<<num<<endl;
	cout<<"Address of single pointer: "<<pointer<<endl;
	cout<<"Address of single pointer: "<<dpointer<<endl;
	
	cout<<endl<<endl<<"The values:"<<endl;
	cout<<"Address of single pointer: "<<*pointer<<endl;
	cout<<"Address of single pointer: "<<**dpointer<<endl;
	
	
	
	int arr[10] = {1,14,2,17895,0,23,157,147,54,23};
	
	/*
	
	1 -> ask user to insert 10 values in array or assign it to array by yourself
	
	2 -> ask the user to insert the value he wants to search in array and find the value
		 tell the user if it exists in the array or not.	 
	
	
	for example user value is: 100 value not found
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}