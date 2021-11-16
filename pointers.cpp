#include<iostream>
using namespace std;

int main() {
	
	//////////////////// Pointers
	
	int num = 100, *pointer;
	
	pointer = &num;	
	
	cout<<"The address is:"<<pointer<<endl;
	cout<<"The value is:"<<*pointer<<endl;
	
	*pointer = 13;
	
	cout<<"The updated value is:"<<*pointer<<endl;
	cout<<"The updated value of x updated through pointer is:"<<num<<endl;
	cout<<"The address is:"<<pointer<<endl;
}