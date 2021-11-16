#include<iostream>
using namespace std;

int main() {
	
	int a,b,c;
	int e,f,g,h,i;
	
	
	char abc,def,ghi;
	
	float num1,num2;
	
	
	cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<"\t"<<e<<"\t"<<f<<"\t"<<g<<"\t"<<h<<"\t"<<i<<"\t"<<endl;
	
	cout<<abc<<"\t"<<def<<"\t"<<ghi<<"\t"<<endl;
	
	cout<<num1<<"\t"<<num2<<"\t"<<endl;
	
	// 1st
	if( num1 ){
		
		cout<<endl<<"True"<<"\t"<<num1;
	} else {
		
		cout<<"false";
	}
	
	// 2nd
	if ( !num1 && num1 == NULL  ) {
	
		cout<<endl<<"True"<<"\t"<<num1;
	}else {
	
		cout<<"false";
	}
	
	
	a = 10; b = 20;  
	
	// 3rd
	if( !(a == 10 && b > 20)) {
		
		cout<<endl<<"True"<<"\t"<<a;
	} else {
		
		cout<<"false";
	}	
	
	
}