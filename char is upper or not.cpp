#include<iostream>
using namespace std;
int main() {
	
	// ask user to insert any character and tell him if it is capital letter or not
	// only by using isupper() method.
	
	char ch;
	
	cout<<"Enter any character:";
	cin>>ch;
	
	if(isupper(ch) == 1){
		cout<<endl<<"It is capital character.";
	}else{
		cout<<endl<<"It is not capital character.";
	}
	
}