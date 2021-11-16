#include<iostream>
using namespace std;

int main() {
	
	char charArr[10] = {'A','Z','c','e','X','z','q','s','Q','Y'};
	int intArr[10];
	
	for(int i=0; i<10; i++) {
		
		intArr[i] = charArr[i];
	}
	
	for(int i=0; i<10; i++) {
		
		cout<<intArr[i]<<"\t";
	}
	
}