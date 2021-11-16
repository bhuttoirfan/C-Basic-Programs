#include<iostream>
using namespace std;

int main() {
		double num1, num2, num3;
		
		cout<<"Enter any number:";
		cin>>num1;
		
		cout<<"Enter any number:";
		cin>>num2;
		
		cout<<"Enter any number:";
		cin>>num3;
		
		if( num1 > num2 && num1 > num3){
			
			cout<<num1<<" is the highest number."<<endl;
			
		}else if(num2 > num1 && num2 > num3) {
			
			cout<<num2<<" is the highest number."<<endl;
			
		}else if(num3 > num1 && num3 > num2) {
			
			cout<<num3<<" is the highest number."<<endl;
			
		}
		
		if(num1 > num2 && num1 < num3) {
			
			cout<<num1<<" is the middle number."<<endl;
		
		} else if(num2 > num1 && num2 < num3) {
			
			cout<<num2<<" is the middle number."<<endl;
		
		} else if(num3 > num1 && num3 < num2) {
			
			cout<<num3<<" is the middle number."<<endl;
		
		}
		
		if( num1 < num2 && num1 < num3){
			
			cout<<num1<<" is the lowest number."<<endl;
			
		}else if(num2 < num1 && num2 < num3) {
			
			cout<<num2<<" is the lowest number."<<endl;
			
		}else if(num3 < num1 && num3 < num2) {
			
			cout<<num3<<" is the lowest number."<<endl;
			
		}
		
}