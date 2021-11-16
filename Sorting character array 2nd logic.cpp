#include <iostream>
using namespace std;

int main() {
	
	char arr[10] = {'A','Z','c','e','X','z','q','s','Q','Y'};
	int index, temp;
	int firstChar, secondChar;
	
	for(int i=0; i<9; i++) {
		
		
		index = i;
		
		for(int j = i+1; j<10; j++) {
			
			
			firstChar = arr[index];
			secondChar = arr[j];
			
			if(firstChar > secondChar) {
				index = j;	
			}
		}
		
		if(index  != i){
			
			temp = arr[index];
			arr[index] = arr[i];
			arr[i] = temp;
		}

	}
	
	for(int i=0; i<10; i++) {
		cout<<arr[i]<<"\t";
	}
	
	
}