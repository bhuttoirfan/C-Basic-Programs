#include<iostream>
using namespace std;

int main() {
	/*
	Q: solve this question while or do while
		ask user to insert any number 
		for example if he insert 9 then print 9,7,5,3,1 and if he inserts 10 print 10,8,6,4,2,0
	*/
	
	
	
	// Using while loop
	
	int num;
	
	cout<<"Insert any number: ";
	cin>>num;

	int temp = num;

	cout<<"Using While loop"<<endl;	
	
	while(num >= 0){
		
		cout<<num<<"\t";
		
		num = num - 2;
	}
	
	cout<<endl<<endl<<"Using do while loop"<<endl;
	
	do {
		cout<<temp<<"\t";
		
		temp = temp - 2;
	
	}while(temp >= 0);
	
	
}
