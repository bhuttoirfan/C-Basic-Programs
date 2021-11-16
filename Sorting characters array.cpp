#include<iostream>
using namespace std;

int main() {
	
	char charArr[10] = {'A','Z','c','e','X','z','q','s','Q','Y'};
	int index, temp;
	
	for(int i=0; i<9; i++) {
		
		
		index = i;
		
		for(int j = i+1; j<10; j++) {
			
			if(charArr[index] < charArr[j]) {
				index = j;	
			}
		}
		
		if(index  != i){
			
			temp = charArr[index];
			charArr[index] = charArr[i];
			charArr[i] = temp;
		}

	}
	
	for(int i=0; i<10; i++) {
		cout<<charArr[i]<<"\t";
	}
	
}