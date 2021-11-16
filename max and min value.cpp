#include<iostream>
using namespace std;

int main() {
	
	// ask user to insert 10 numbers in array find highest and lowest number
	
	int arr[10] = {100,20,47,25,252,64,74,89,13,32};
	int max,min;
	
	
	/*
	for(int i = 0; i < 10; i++){
		cout<<"Enter any number:";
		cin>>arr[i];
	}
	*/
	
	
	for(int i=0; i<10; i++){
		
		if(arr[i] > max){
			
			max = arr[i];
		}
	}
	
	cout<<"Maximum value is: "<<max<<endl;
	
	
	
}