#include<iostream>
using namespace std;

int main() {
	/*
	Question:
	Ask user to insert week day number and tell them the name of day.
	using switch condition.
	*/
	
	int dayNumber;
	
	cout<<"Enter day number:";
	cin>>dayNumber;
	
	switch(dayNumber){
		case 1:
			cout<<"The day is Monday.";
			break;
		case 2:
			cout<<"The day is tuesday.";
			break;
		case 3:
			cout<<"The day is wednesday.";
			break;
		case 4:
			cout<<"The day is thursday.";
			break;
		case 5:
			cout<<"The day is friday.";
			break;
		case 6:
			cout<<"The day is saturday.";
			break;
		case 7:
			cout<<"The day is sunday.";
			break;
		default:
			cout<<"The given number is not correct.";
	}
	
}