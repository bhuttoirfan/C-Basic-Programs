#include<iostream>
using namespace std;

int main() {
	char chArr[100];
	int flag=1;
	
	cout<<"Enter any sentence: ";
	cin>>chArr;
	
	
	cout<<endl<<"The word that we want to search in string is: Yes";
	
	for(int i=0; chArr[i] != '\0'; i++) {
		
		if(chArr[i] == 'Y' && chArr[i+1] == 'e' && chArr[i+2] == 's') {
			
			flag=0;
			cout<<endl<<endl<<"The word Yes exists in this char Array (String).";
		}
	}
	
	if(flag) {
		cout<<endl<<endl<<"The word does not exists in this char Array (String).";
	}
}