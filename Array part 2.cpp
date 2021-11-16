#include<iostream>
using namespace std;

int main() {
	
	int num[5];
	
	for(int i = 0; i < 5; i++){

		cout<<"Enter any number:";
		cin>>num[i];

	}
	
	cout<<endl<<endl<<"The values are:"<<endl;
	
	for(int i = 0; i < 5; i++){
		
		cout<<num[i]<<"\t";
		
	}
	
	
	//cout<<num[0]<<num[1]<<num[2];
	
	
}