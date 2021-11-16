#include<iostream>
using namespace std;
int main() {
	int marks;
	
	cout<<"Enter your marks:";
	cin>>marks;
	
	if( marks > 33 && marks < 101) {
		
		cout<<"You are passed.";
		
	} else {
		
		cout<<"You fail.";
	
	}
}
