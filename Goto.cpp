#include<iostream>
using namespace std;

int main() {
	
	/*
	goto label:	  label:
	***				statement
	***			  ***	
	***			  ***
	***	     	  ***
	***			  ***
	label:        goto label:  
	  statement							
	*/
	
	int i,x,z,y;
	
	// First Method
	x = 10;
	
	goto jump;
	
	x=100;
	cout<<x<<endl;
	
	if(x>10){
		cout<<"true"<<endl;
	}
	
	jump:
		x=100;
		cout<<x<<endl;
	
		if(x>10){
			cout<<"true"<<endl;
		}
		
	// 2nd Method
	y = 101;
	
	greaterY: {
		cout<<"Y is greater than 100"<<endl;
		y=0;
	}
	
	if(y>100) {
		cout<<"Y is greater"<<endl;
		goto greaterY;
	}	
	
	if(i>10) {
		goto loop;
	}
	
	
	
	// loop using goto
	
	loop:
		cout<<i<<"\t";
		i++;
	
	
	if(i<10) goto loop;
	
	cout<<endl<<"Loop Finished"<<endl;
	
	// Use of if without using middle brackets
	if(i<10) cout<<"true"<<endl;
	else cout<<"false"<<endl;
	
	
	if(i>100) goto label;
	else goto label2;	
	
	
	label:
		cout<<"I is greater"<<endl;
	
	label2:
		cout<<"I is not greater than 100"<<endl;				
}		