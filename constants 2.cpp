#include<iostream>
using namespace std;

int main() {
	
	const char fLetter = 'F'; // Read Only
//	fLetter = 'H';
	cout<<"First Letter of Name: "<<fLetter<<endl;
	
	
	const int* no;
	
	no = new int(15);
	
//	no=15
	
	cout<<"The no is: "<<*no<<endl;
	cout<<"The address is: "<<no<<endl;
	
	no = new int(17);
	
	cout<<"The no is: "<<*no<<endl;
	cout<<"The address is: "<<no<<endl;
	
	
	int x=10; // Read and Write
}