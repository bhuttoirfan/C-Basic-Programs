#include<iostream>
using namespace std;
int main() {
	
	/******* Nested If ***********/  
	
	char character;
	
	cout<<"Insert something:";
	cin>>character;
	
	if(character >= 'a' && character <= 'z') {
		cout<<"It is alphabetical character";
		
		if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'){
			cout<<", and it is also vowel";
		}	
		
			
	} else {
		cout<<"It is not character. It might be special character or a digit.";
	}
	
}