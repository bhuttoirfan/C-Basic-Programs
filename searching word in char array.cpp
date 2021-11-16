#include<iostream>
using namespace std;

int main() {
	
	char chArr[50], word[10];
	string foundedWord;
	int flag=1;
	
	cout<<"Enter the sentence: ";
	cin>>chArr;
	
	cout<<endl<<endl<<"The sentence is written below: "<<endl;
	cout<<chArr<<endl; 
	
	cout<<"Enter the word you want to search: ";
	cin>>word;
	
	for(int i=0; chArr[i] != '\0'; i++) {
		
		for(int j=0; word[j] != '\0'; j++) {
		
			if(chArr[i+j] == word[j]) {
				
				foundedWord += chArr[i+j];
				
				if(foundedWord == word) {
					cout<<"The word exists in the array"<<endl;
					flag=0;
				}
			}
		}

		foundedWord="";		
	}
	
	if(flag) {
		cout<<"The word does not exist in char string."<<endl;
	}
}