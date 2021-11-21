#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

// Flag to check if user is logged in.
// if yes you can update else login first to update
bool loginFlag = false;
bool adminLoginFlag = false;

void signUp(string *add, string *name, string *pPass, double *no);
void logIn(string emailAdd, string pass);
void update(string *name, string *pass, double *mNo);
void dlt(string *add, string *name, string *pPass, double *no);
void display(string add, string name, string pass, double no);

int main() {

	// Admin Data
	string adminName = "irfan", adminPass = "pas123";
	cout<<"---->>>> Enter admin info to use this program <<<<----"<<endl;
	logIn(adminName, adminPass);
	
	// Variables
	double mobileNo;
	string emailAddress, name, password;
	
	// Pointers with address of pointing variables
	string *pAdd, *pName, *pPass;
	double *pNo;
	
	// Variable for user choice
	int choice;
	
	bool flag = true; // or 1
	
	
	pAdd = &emailAddress;
	pName = &name;
	pNo = &mobileNo;
	pPass = &password;
	
	if(adminLoginFlag) {
		cout<<endl<<endl<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>> Welcome to My Program of User Management System <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;

		while(flag) {
			cout<<"\n>>>>>> 1. SignUp \n>>>>>> 2. Login \n>>>>>> 3. Update \n>>>>>> 4. delete \n>>>>>> 5. Display \n------->>>>>> Choice: ";
			cin>>choice;
			
			switch(choice) {
				case 1:
					// calling signup function to enter data
					signUp(pAdd, pName, pPass, pNo);
					break;
				
				case 2:
					// calling login function to login
					logIn(emailAddress, password);
					break;
				
				case 3:
					// Calling update function to update user information
					if(loginFlag) update(pName, pPass, pNo);
					else cout<<endl<<"---------->>>>>>>>>> Login first to update.";
					break;
					
				case 4:
					// Calling delete function delete user information
					if(loginFlag) dlt(pAdd, pName, pPass, pNo);
					else cout<<endl<<"---------->>>>>>>>>> Login first to delete.";
					break;
					
				case 5:
					// calling display function to show user information
					display(emailAddress, name, password, mobileNo);	
					break;
				
				default:	
					cout<<endl<<">>>>>>>>>>>>>>>>>>>>>>> Invalid choice <<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;
			}
			cout<<endl<<endl<<"If you want to end the program enter 0 else enter 1 number: ";
			cin>>flag;
		}
			
	} else {
		
		cout<<endl<<endl<<">>>>>>>>>>>>>> You can not use this program you inserted invalid admin information <<<<<<<<<<<<<<<<"<<endl;
	}
	
	
	cout<<endl<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>> Thank you for using this program <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	return 0;
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
	
	if(r1 && r2 ) {
		
		if(adminLoginFlag) {
			loginFlag = true;
		}
		
		cout<<"Logged in successfully."<<endl;
		
		adminLoginFlag = true;
	}
	else cout<<"Email or password is invalid."<<endl;
}

void update(string *name, string *pass, double *mNo) {
	
	cout<<endl<<endl<<">>>>>>>>>>>>>>>>>>>> Update User Information <<<<<<<<<<<<<<<<<<<<<<"<<endl;
	
	cout<<"Enter the name you want to update with: ";
	cin>>*name;
	cout<<"Enter the password you want to update with: ";
	cin>>*pass;
	cout<<"Enter the mobile number you want to update with: ";
	cin>>*mNo;
	
	cout<<endl<<"------------->>>>>>>>> User Information Updated."<<endl;
}

void dlt(string *add, string *name, string *pPass, double *no) {
	*add = "";
	*name = "";
	*pPass = "";
	*no = 0;
	
	loginFlag = false;
	cout<<endl<<endl<<"------------->>>>>>>>> User Information Deleted."<<endl;
}

void display(string addr, string name, string pass, double no){
	cout<<endl<<endl<<">>>>>>>>>>>>>>>>>>>> User Information <<<<<<<<<<<<<<<<<<<<<<"<<endl;

	cout<<"The name is: "<< name<<endl;
	cout<<"The mobile number is: "<< no<<endl;
	cout<<"The Email address is: "<< addr<<endl;
	cout<<"The password is: "<< pass<<endl;
}