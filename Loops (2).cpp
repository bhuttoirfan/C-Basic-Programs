#include<iostream>
using namespace std;

int main() {
	
	int i = 1, j = 1;           
	
	// 1st
	for(i; i<10; i++) {
		cout<<i<<"\t";
	}	
	
	// 2nd	
	for( ; i < 100 ; i++){
		
		cout<<i<<"\t";
		
		if(i ==49) {
			break;
		}
	}	
	
	// Nested Loop
	for(i; i<=5; i++) {
		
		for(j = 1; j<=5; j++){
			
			cout<<"("<<i<<","<<j<<")"<<"\t";
			//cout<<"*";
		}
		
		cout<<endl;
	}
	
	
	
	
	
	
}
