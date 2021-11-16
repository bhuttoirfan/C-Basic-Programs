#include<iostream>
using namespace std;

int main() {
	
	int arr[10] = {484,4,75,47,5,47,4,78,7,4};
	int arrTwo[10];
	
	for(int i=0; i<10; i++) {
		
		if(i != 9){
			
			arrTwo[i] = arr[i] + arr[i+1];
		} else {
			
			arrTwo[i] = arr[i] + arr[i-1];
		}		
	}
	
	
	for(int i=0; i<10; i++) {
		
		cout<<arrTwo[i]<<"\t";
	}	
}