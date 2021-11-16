#include<iostream>
using namespace std;

int main() {
	/*
	home work:
	
	ask user to insert his/her name or any word
	1 --> find the vowels in the name or word
	2 --> remove the vowels from the name or word 

	char charArray[20];
	
	cin>>charArray => Hasnain;
	
	1 -> cout<<vowel-> a,a,i;
	
	2 -> cout<<Hsnin;
	
	*/
	
	char word[20], i;
	
	// Third Method
	string wordWithoutVowels;
	
	cout<<"Enter any word or name:";
	cin>>word;
	
	cout<<endl<<"Vowels is/are:";
	
	for(i = 0; word[i] != '\0'; i++) {
		
		if ( 
			word[i] == 'a' || word[i] == 'e' ||
			word[i] == 'i' || word[i] == 'o' ||
			word[i] == 'u'
		) {
			
			cout<<word[i]<<", ";	
		
		}else{
			
			////////////////// Third Method
			
			// Note: wordWithoutVowels += word[i] is equal to:
			// wordWithoutVowels = wordWithoutVowels + word[i];
			wordWithoutVowels += word[i];
			
			
		}
	}

	cout<<endl<<"Name or Word without vowels is: "<<wordWithoutVowels;
	
	/*
	// 1st Method:
	for(i = 0; charArray[i] != '\0'; i++) {
		
		if ( 
			charArray[i] == 'a' || charArray[i] == 'e' ||
			charArray[i] == 'i' ||charArray[i] == 'o' ||
			charArray[i] == 'u'
		) {} else {
			cout<<charArray[i];
		}
	}	
	
	
	
	// 2nd Method:
	for(i = 0; charArray[i] != '\0'; i++) {
		
		if ( 
			charArray[i] != 'a' || charArray[i] != 'e' ||
			charArray[i] != 'i' ||charArray[i] != 'o' ||
			charArray[i] != 'u'
		) {
			cout<<charArray[i];	
		}
	}
	*/
}