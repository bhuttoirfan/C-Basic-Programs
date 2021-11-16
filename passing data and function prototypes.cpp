#include<iostream>
using namespace std;

int passByValue(int num1, float num2);

void passByReference();

int main() {	
	int a=11;
	float b;
	
	{
		cout<<a<<endl;
		int c=10;
		cout<<c<<endl;
	}
	
	// error
	// cout<<c;
	
	cout<<"Enter numbers: ";
	cin>>a>>b;
	
	// Calling function
	passByValue(a, b);
	passByValue(17, 2.2);
	passByValue(17, b);
	passByValue(a, 2.2);
	
	
	passByReference();
}

int passByValue(int num1, float num2) {
	cout<<endl<<endl<<"passByValue() function"<<endl;
	
	cout<<"The sum of the numbers is: "<<num1+num2<<endl;
}

void passByReference() {
	cout<<endl<<endl<<"passByReference () function"<<endl;
}


