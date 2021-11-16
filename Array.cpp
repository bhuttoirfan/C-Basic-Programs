#include<iostream>
using namespace std;

int main() {
	
	///////////////********* ARRAYS ***********\\\\\\\\\\\\\\\\\
	
	int num[10];
	
	/*
	char ch[3];
	cout<<"Enter numbers:";
	cin>>num[0]>>num[1]>>num[2];
	
	cout<<"num1 is"<<num[0]<<", num2 is"<<num[1]<<", num3 is"<<num[2];
	*/
	
	
	for(int i = 0; i < 10; i++){
		cout<<"Enter any number:";
		cin>>num[i];
	}
	
	cout<<endl<<endl<<"The values are"<<endl;
	
	for(int i = 0; i < 10; i++){
		cout<<num[i]<<"\t";
	}
	
}