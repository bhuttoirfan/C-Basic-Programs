#include<iostream>
using namespace std;

int main() {
	
	int arr1[10] = {12,14,17,100,12,125,147,135,174,20};
	int arr2[10], count = 0;
	
	
	for(int i=9; i >= 0; i--){
		
		arr2[count] = arr1[i];
		count++;
		
	}
	
	cout<<"Correct order of array:"<<endl;
	
	for(int i=0; i<10; i++){
		cout<<arr1[i]<<"\t";
	}
	
	
	cout<<endl<<endl<<"Reverse order of array(Array2):"<<endl;
	
	for(int i=0; i<10; i++){
		cout<<arr2[i]<<"\t";
	}	
	
	
	cout<<endl<<endl<<"Reverse order of array (Array1) without changing its location(indexes):"<<endl;
	for(int i=9; i >= 0; i--){
		
		cout<<arr1[i]<<"\t";	
	}
	
}