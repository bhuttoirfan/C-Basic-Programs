#include<iostream>
using namespace std;

int main() {
	
	int arr[10] = {20,11,-11,3,2,6,7,100,9,10};
	int index, temp;
	
	for(int i=0; i<9; i++) {
		
		
		index = i;
		
		for(int j = i+1; j<10; j++) {
			
			if(arr[i] < arr[j]) {
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