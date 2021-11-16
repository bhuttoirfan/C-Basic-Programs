#include<iostream>
using namespace std;

int main() {
	
	/*
	syntax of while:
	
	while( condition ) {
		statement......
	}
	
	*/
	
	int i = 10;
	
	while(i < 10) {

		cout<<"Value of i in while loop: "<<i<<"\t";

		i++; // i++ -> i = i + 1;

	}
	
	/*
	syntax of do while:
	
	do {
	
		statement......
	
	}while( condition );
	
	*/
	
	do {
		
		cout<<"Value of i in do while loop: "<<i<<"\t";
		
		i++;
	
	}while(i < 10);
	
}