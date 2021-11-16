#include<iostream>
using namespace std;

int main() {
	/*
	// 2D Array
	int arr[3][4] = {
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
	}; 
	*/
	
	int arr[3][4];
	cout<<"Enter values: ";
	for(int i=0; i<3; i++){
		
		for(int j=0; j<4; j++) {
			
			cin>>arr[i][j];
		}
	}
	
	cout<<endl<<endl<<"the values are: "<<endl;
	
	for(int i=0; i<3; i++){
		
		for(int j=0; j<4; j++) {
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
}