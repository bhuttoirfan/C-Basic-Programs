#include<iostream>
using namespace std;
int main() {
	int a = 5.7;
	float b = 10.5;
	double c = 8;
	
	a = a + b + 0.9;
	
	b = a + c + 0.5;
	
	c = a + b + c;
	
	cout<<"C is equal to: "<< c;
	
}
