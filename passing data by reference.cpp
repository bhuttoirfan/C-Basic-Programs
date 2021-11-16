#include<iostream>
using namespace std;

void passByValue(int number) {
	cout<<endl<<"The number in passByValue() Function: "<<number;
	number = 25;
	cout<<endl<<"The number in passByValue() Function: "<<number;
}


void passByReference(int *p1, int *p2);

int main() {	
	
//	int x = 10;
//  Calling Function passByValue
//	passByValue(x);
//	
//	cout<<endl<<endl<<"The x in main function: "<<x;
	
	int a, b, *x1, *x2;
	
	x1 = &a; x2 = &b;
	
	cout<<"Enter numbers: ";
	cin>>a>>b;
	
//	Calling Function passByReference
	passByReference(x1, x2);
	
	cout<<"The values of a and b are: "<<a<<"\t"<<b<<endl;
}

void passByReference(int *p1, int *p2) {
	cout<<endl<<endl<<"passByReference () function"<<endl;
	
	cout<<"Address of p1: "<<p1<<endl;
	cout<<"value of p1: "<<*p1<<endl;
	
	cout<<"Address of p2: "<<p2<<endl;
	cout<<"value of p2: "<<*p2<<endl;
	
	*p1 = 20; *p2 = 77;
}



