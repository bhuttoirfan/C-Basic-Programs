#include<iostream>
using namespace std;

int global = 100;
const int ten=10;

void func1() {
	
	cout<<"global in function1: "<<global<<endl;
	cout<<"constant ten in function1: "<<ten<<endl;
	global=100;
}




int main() {

/******************** Global Scope */	
	cout<<"global in main function: "<<global<<endl;
	cout<<"constant ten in main function: "<<ten<<endl<<endl;
	global = 7;

	func1();
	
	cout<<"global in main function: "<<global<<endl;	
	
	
	
	
	
/******************** Local Scope */	
//	cout<<num;	
	int num=1;
	
	if(true){
		cout<<num<<endl;
		int ifNum = 10;
		cout<<ifNum<<endl;
		cout<<global;
	}
	
//	will not work because of lower scope
//	cout<<ifNum<<endl;
}