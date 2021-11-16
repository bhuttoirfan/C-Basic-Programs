#include<iostream>
using namespace std;

int main() {
	
	int arr[3][4] = {
		{7,3,0,5},
		{10,8,3,7},
		{3,9,2,7}
	};
	
	int sumArray[4]={0,0,0,0};
	
	for(int i=0; i<3; i++) {
		
		for(int j=0; j<4; j++) {
			cout<<arr[i][j]<<"\t";
		}
		
		cout<<endl;
	}
	
	cout<<endl<<"Sum in the loop"<<endl;
	for(int i=0; i<4; i++) {
		
		for(int j=0; j<3; j++) {
			
			//sumArray[i] = sumArray[i] + arr[j][i];
			sumArray[i] += arr[j][i];
		}
		
		cout<<sumArray[i]<<"\t";
	}
		
		
	cout<<endl<<endl<<"The sum of the columns is: "<<endl;
	for(int i=0; i<4; i++) {
		
		cout<<sumArray[i]<<"\t";
	}
	
	
	
	
	
	
	
	
	
	
	
}