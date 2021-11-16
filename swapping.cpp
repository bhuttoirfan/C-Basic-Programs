#include<iostream>
using namespace std;
int main() {
	
	int a, b, temp;
	
	cout<<"Enter value of variable A: ";
	cin>>a;
	
	cout<<"Enter value of variable B: ";
	cin>>b;
	
	cout<<endl<<endl<<"Values before swapping"<<endl;
	cout<<"Value of A is :"<<a<<endl;
	cout<<"Value of B is :"<<b<<endl;
	
	temp = a;
	
	a = b;
	b = temp;
	
	cout<<endl<<endl<<"Values after swapping"<<endl;
	cout<<"Value of A is :"<<a<<endl;
	cout<<"Value of B is :"<<b<<endl;
}