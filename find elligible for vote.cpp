#include<iostream>
using namespace std;

bool isElligible(int age);

int main() {
	/*
	Q
		1 -> A person is elligible to vote if his age >= 18
		2 -> Define a function to find out if he/she is.
	*/	
	int age;
	bool result;
	
	cout<<"Enter his/her age: ";
	cin>>age;
	
	
////////////////// 1st Method		
//	result = isElligible(age);
//	
//	if(result) cout<<endl<<"He/She is elligible to vote";
//	else cout<<endl<<"He/She is not elligible to vote";

////////////////// 2nd Method

	if( isElligible(age) ) cout<<endl<<"He/She is elligible to vote";
	else cout<<endl<<"He/She is not elligible to vote";
}

bool isElligible(int age) {
	
	if(age >= 18) return true;
	else return false;	
}