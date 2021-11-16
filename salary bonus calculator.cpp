#include<iostream>
using namespace std;
int main() {
	
	/* A company decided to give bonus of 5%
	 to employee if his/her year of service is more than 5 years.
	Ask user for their salary and year of service and print the net bonus amount. */
	
	double salary, yearOfService;
	float bonus;
	
	cout<<"Enter your salary: ";
	cin>>salary;
	
	cout<<"Enter year of service you have provided: ";
	cin>>yearOfService;
	
	if(yearOfService > 5){
		bonus = salary * .05;
		
		cout<<"You have been given bonus of 5% of your salary which is: "<<bonus<<" rupees.";
		
	} else {
		cout<<"Dear customer as you have not provided 5 years of service to this company \n that's why you are not getting any bonus.";
	}
		
}
