#include<iostream>
using namespace std;

int main() {
	string word, arr[5] = {"abc","xyz","asdasd","saw","asd"};
	
	cout<<"The String is: ";
	for(int i=0; i<5; i++) {
		cout<<arr[i]<<"\t";
	}
	
	cout<<endl<<endl<<"Enter the word you want to search: ";
	cin>>word;
	
	for(int i=0; i<5; i++) {
		if(arr[i] == word){
			cout<<word<<" exists in string array.";
		}
	}
}