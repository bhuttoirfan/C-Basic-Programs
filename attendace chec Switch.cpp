#include<iostream>
using namespace std;
int main() {
	float totalClassesHeld, noOfClassesAttended;
	float percent;
	
	cout<<"Total number of classes held? :";
	cin>>totalClassesHeld;
	cout<<"Total number of classes you attended? :";
	cin>>noOfClassesAttended;
	
	percent = (noOfClassesAttended / totalClassesHeld) * 100 ;
	
	int flag = percent > 75;
	
	switch(flag) {
		case 1:
			cout<<"Congratulation! You can sit in the exam.";
			break;
		default:
			cout<<"Sorry dear student you are not capable of sitting in the exam. You can go Home.";	
	}
	
	
	
	/*
	if(percent > 0.75){
	
		cout<<"Congratulation! You can sit in the exam.";
	
	} else {
	
		cout<<"Sorry dear student you are not capable of sitting in the exam. You can go Home.";
	
	}
	*/
}
