#include<iostream>
using namespace std;
int main() {
	
	char sign;
	int num1,num2;
	
	cout<<"Which operation do you want to perform:";
	cin>>sign;
	
	cout<<"Enter the number:";
	cin>>num1;
	cout<<"Enter the number:";
	cin>>num2;	
	
	if( sign == '+'){
		
		cout<<"The addition is: "<<num1+num2;
	
	}else if(sign == '-'){
	
		cout<<"The subtraction is: "<<num1-num2;
	}else if(sign == '*'){
	
		cout<<"The multiplication is: "<<num1*num2;
	
	}else if(sign == '/'){
	
		cout<<endl<<"The division is: "<<num1/num2;
	}
}
