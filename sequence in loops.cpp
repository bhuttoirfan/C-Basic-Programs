#include<iostream>
using namespace std;

int main() {
	
	/*
	demo:
		user inserts: 5 (nth term)
			1*1+2*2+3*3+4*4 => ans 30 
			
			1+1 * 2+2 * 3+3 * 4+4 *......nth(user's input) => ans 336
			print total of this series
			
		ask user to insert nth term and print the sum of the sequence as shown above.
		
		user inserts: 5 (nth term)
			1+2+3+4+5+6+7+8+ ...nth term
			
		user inserts: n (nth term)
			1*2*3*4*5 ... nth term
		
		
		
		
		
		
	*/
	
	int term, mul, totalSum = 0;
	
	cout<<"Enter the value till you want to follow the sequence: ";
	cin>>term;
	
	
	for(int i = 1; i <= term; i++){
		
		mul = i * i;
		
		totalSum = totalSum + mul;
		
	}
	
	cout<<"The sum of the sequence is:"<< totalSum;
	
	
}