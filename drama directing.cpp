#include<iostream>
using namespace std;

int main() {
	/*
		Q: Ask director to insert first character of drama name and check if it is a, and
		check if it's length is greater than 28 minutes. If yes then it the
		drama can be directed otherwise it can not.
	*/
	
	int timeLength;
	char firstChar;
	
	cout<<"Enter time length of drama:";
	cin>>timeLength;
	
	cout<<"Enter first character of drama name:";
	cin>>firstChar;
	
	if( timeLength > 28 && firstChar == 'a'  ){
		
		cout<<"We can direct the drama.";
		
	}else {
		cout<<"We can't direct the drama.";
	}
}