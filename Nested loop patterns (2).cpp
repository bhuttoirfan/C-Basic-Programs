#include<iostream>
using namespace std;

int main() {
	
	//cout<<endl<<"Upper is: "<<isupper('A');
	
	/*
	11111
	11111
	11011
	11111
	11111
	*/
	
	
	
	float rows, cols;
	float pointRow, pointCol;
	
	cout<<"Enter rows and columns for the pattern:";
	cin>>rows>>cols;
	
	pointRow = (rows/2) + 0.5;  
	pointCol = (cols/2) + 0.5;
	
	
	for(int i = 1; i <= rows; i++){
		
		for(int j = 1; j <= cols; j++){
			
			if(i == pointRow && j == pointCol){
				cout<<"0";
			}else{
				cout<<"1";
			}	
		}
		
		cout<<endl;
		
	}
	
	
	
	
	
	
}