#include<iostream>
using namespace std;

void setter(string *userInfo);
void display(string *userInfo);

int main() {
	string userInfo[3];
	
	setter(userInfo);
	
	cout<<"The data is: "<<endl;
	display(userInfo);
}

void setter(string *userInfo) {
	
	cout<<"Enter your name: ";
	cin>>userInfo[0];
	cout<<"Enter your address: ";
	cin>>userInfo[1];
	cout<<"Enter your mobile no: ";
	cin>>userInfo[2];
	cout<<endl<<endl;
		
}

void display(string *userInfo){
	cout<<"The name is: "<< userInfo[0]<<endl;
	cout<<"The address is: "<< userInfo[1]<<endl;
	cout<<"The mobile number is: "<< userInfo[2]<<endl;
}