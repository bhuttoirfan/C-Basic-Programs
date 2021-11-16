#include<iostream>
using namespace std;

int main() {
	/*
	Q:
	 ask user to insert his choice to print
	 addition of number's digits or subtraction of digits or multiplcation of digits
	 
	 ask user to inser any number print sum of its digits using for loop.
	 */
	 
	int ch, number, digit;
	double sum = 0, sub = 0, mul = 1;
	
	cout<<"Insert \n 1) for addition of number's digits \n 2) for subtraction of digits \n 3) for multiplcation of digits \n";
	cin>>ch;
	
	cout<<"Enter any number:";
	cin>>number;	
	
	if(ch == 1) {
		
		for(number; number > 0;number = number / 10 ){
			digit = number % 10;
			sum = sum + digit;
		}
		
		cout<<"The addition of the digits is: "<<sum<<endl;
	} else if( ch == 2){
		
		for(number; number > 0;number = number / 10 ){
			digit = number % 10;
			sub = digit - sub ;
		}
		
		cout<<"The subtraction of the digits is: "<<sub<<endl;
	
	} else if(ch == 3){
		
		for(number; number > 0;number = number / 10 ){
			digit = number % 10;
			mul = mul * digit;
		}
		
		cout<<"The multiplication of the digits is: "<<mul<<endl;
		
	}else {
		cout<<"Invalid choice";
	}
	 
	 
	 
}