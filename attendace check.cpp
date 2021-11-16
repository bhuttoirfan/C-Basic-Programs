#include <iostream>
using namespace std;
int main() {
	
/*	Q:
		A student will not be allowed to sit in exam if his/her attendence is less than 75%.
		Take following input from user
		Number of classes held
		Number of classes attended.
		And print
		percentage of class attended
		Is student is allowed to sit in exam or not.
*/	
	float totalClassesHeld, noOfClassesAttended;
	float percent;
	
	cout<<"Total number of classes held? :";
	cin>>totalClassesHeld;
	cout<<"Total number of classes you attended? :";
	cin>>noOfClassesAttended;
	
	percent = noOfClassesAttended / totalClassesHeld ;
	
	if(percent > 0.75){
		cout<<"Congratulation! You can sit in the exam.";
	} else {
		cout<<"Sorry dear student you are not capable of sitting in the exam. You can go Home.";
	}
	
}
