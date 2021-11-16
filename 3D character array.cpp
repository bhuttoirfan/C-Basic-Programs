#include<iostream>
using namespace std;

int main() {
	
	char ***chArr;

	// No of Boxes
	chArr = new char**[3];
		
	// No of words
	chArr[0] = new char*[2];
	chArr[1] = new char*[2];
	chArr[2] = new char*[2];
	
//	for(int i=0; i<3; i++) {
//		chArr[i] = new char*[2];
//	}
	
	cout<<"Enter any word for 2D 0 and word 0: ";
	cin>>chArr[0][0];
	cout<<"Enter any word for 2D 0 and word 1: ";
	cin>>chArr[0][1];
	
	
	cout<<endl<<endl<<"Words are: "<<endl;
	cout<<chArr[0][0]<<"\t"<<chArr[0][1];
}