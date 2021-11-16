#include<iostream>
using namespace std;

int main() {
	
	/*
	1->	10101
	2->	01010
	3->	10101
	4->	01010
	5->	10101
	*/
	
	
	int rows,cols;
	
	
	cout<<"Enter number of rows:";
	cin>>rows;
	
	cout<<"Enter number of columns:";
	cin>>cols;
	
	for(int i = 1; i <= rows; i++){
		
		for(int j = 1; j <= cols; j++){
			
			if(i%2 == 0) {
			
				if(j%2 == 0){
					
					cout<<"1";
				
				}else{
					
					cout<<"0";
				
				}
				
			}else {
				
				if(j%2 == 0){
					
					cout<<"0";
					
				}else{
					
					cout<<"1";
					
				}	
			}
		}
		cout<<endl;
	}	
}