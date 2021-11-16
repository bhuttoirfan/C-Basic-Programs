#include<iostream>
using namespace std;

int main() {
	
	int size, flag=1;
	string name;
//	string *dyStrArr; Upto you either initialize here or below
	
	cout<<"Enter the count for the names you want to insert: ";
	cin>>size;
	
	string *dyStrArr = new string[size];
	
	cout<<endl<<"Enter the names: "<<endl;

	for(int i=0; i<size; i++) {
		cin>>dyStrArr[i];
	}
	
	cout<<"Here are the names: "<<endl;
	for(int i=0; i<size; i++) {
		cout<<i<<") "<<dyStrArr[i]<<endl;
	}
	
	
	cout<<endl<<endl<<"Enter the name you want to search: ";
	cin>>name;
	
	for(int i=0; i<size; i++) {
		
		if(name == dyStrArr[i]){
			flag=0;
			cout<<"The name "<<dyStrArr[i]<<" exists in string array."<<endl;
		}
	}
	
	if(flag) {
		cout<<"The name "<<name<<" does not exist in string array."<<endl;
	}
	
	
}