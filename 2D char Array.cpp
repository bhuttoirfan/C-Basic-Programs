#include<iostream>
using namespace std;

int main() {
	
//	char arr[15];
//	cin>>arr;
	
	char chArr[4][15];
	
	
	cout<<"Enter Words: ";
	for(int i=0; i<4; i++) {
		cin>>chArr[i];
	}
	
	cout<<endl<<endl<<"The given inputs are: "<<endl;
	for(int i=0; i<4; i++) {
		
		for(int j=0; chArr[i][j] != '\0'; j++) {
			cout<<chArr[i][j];
		}
		cout<<endl;
	}
}