#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

void signUp(string *add, string *name, string *pPass, double *no);
void display(string add, string name, string pass, double no);
void logIn(string emailAdd, string pass);

int main() {
	double mobileNo;
	string emailAddress, name, password;
	
	bool flag = true; // or 1
	
	string *pAdd, *pName, *pPass;
	double *pNo;
	
	pAdd = &emailAddress;
	pName = &name;
	pNo = &mobileNo;
	pPass = &password;
	
	while(flag) {
		// calling signup function to enter data
		signUp(pAdd, pName, pPass, pNo);
	
		// calling login function to login
		logIn(emailAddress, password);
	
		// calling display function to show user information
		display(emailAddress, name, password, mobileNo);	
		
		cout<<endl<<endl<<"If you want to end the program enter 0 else enter 1 number: ";
		cin>>flag;
	}
	
}

void signUp(string *pAdd, string *pName, string *pPass, double *pNo) {
	cout<<endl<<endl<<">>>>>>>>>>>>>>>>>> Signup <<<<<<<<<<<<<<<<<<<"<<endl;
	
	cout<<"Enter your name: ";
	cin>>*pName;
	cout<<"Enter your mobile no: ";
	cin>>*pNo;
	cout<<"Enter your email Address: ";
	cin>>*pAdd;
	cout<<"Enter Password: ";
	cin>>*pPass;
}

void logIn(string emailAdd, string pass) {
	string email, password;
	
	cout<<endl<<endl<<">>>>>>>>>>>>>>>>>> Login <<<<<<<<<<<<<<<<<<<"<<endl;
	
	cout<<"Enter your email: ";
	cin>>email;
	cout<<"Enter your password: ";
	cin>>pass;
	
	bool r1 = email == emailAdd;
	bool r2 = password.compare(pass);
	
	if(r1 && r2 ) cout<<"Logged in successfully."<<endl;
	else cout<<"Email or password is invalid."<<endl;
}

void display(string addr, string name, string pass, double no){
	cout<<endl<<endl<<">>>>>>>>>>>>>>>>>>>> User Info <<<<<<<<<<<<<<<<<<<<<<"<<endl;

	cout<<"The name is: "<< name<<endl;
	cout<<"The mobile number is: "<< no<<endl;
	cout<<"The Email address is: "<< addr<<endl;
	cout<<"The password is: "<< pass<<endl;
}