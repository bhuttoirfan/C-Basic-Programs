#include<iostream>
using namespace std;

int main() {
	/*
	Q:1
	11111
	10001
	10001
	10001
	11111
	*/
	
	
	cout<<"First Pattern"<<endl;
	
	for(int i = 1; i <= 5; i++){
		
		for(int j = 1; j <=5; j++){
			
			if(i == 1 || i == 5) {
				
				cout<<"1";
			
			} else{
				
				if(j == 1 || j == 5){
					
					cout<<"1";
				
				}else{
					
					cout<<"0";	
				}	
			}
		}
		cout<<endl;
	}
	
	cout<<endl<<endl<<"second Pattern"<<endl;
	
	/*
	01010
	01010
	01010
	01010
	01010
	*/
	
	int rows, cols;
	
	cout<<"Enter the number of rows you want the program to show:";
	cin>>rows;
	
	cout<<"Enter the number of columns you want the program to show:";
	cin>>cols;
	
	for(int i = 1; i <= rows; i++){
		
		for(int j = 1; j <= cols; j++) {
			
			if(j%2 == 0) {
				
				cout<<"1";
				
			}else{
				
				cout<<"0";
				
			}	
		}
		
		cout<<endl;	
	}
	
	
	/*
	if you want to practice it in Nested while Loop.
	
		int i =1,j=1;
		while(i<=5){
			
			while(j<=5){
				
				
				
				
				j++;
			}
			
			i++;
		}
		
	*/
}