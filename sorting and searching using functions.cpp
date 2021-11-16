#include<iostream>
using namespace std;

void sorting(int *pArray);
bool searching(int *pArray, int num);

int main() {
	int number;
	int arr[10] = {88,21,45,6,7,20,6,9,44,70};
	
	sorting(arr);
	
	cout<<"The sorted array is: "<<endl;
	for(int i=0; i<10; i++) {
		cout<<arr[i]<<"\t";
	}
	
	cout<<endl<<endl<<"Enter the number you want to search: ";
	cin>>number;
	
	if( searching(arr, number) ) cout<<number<<" exists in the array.";
	else cout<<number<<" does not exists in the array.";
}
bool searching(int *pArray, int num) {
	
	for(int i=0; i<10; i++) {
		if(pArray[0] < num || pArray[9] > num) return 0;
		if(pArray[i] == num) return 1;	
	}
	
	return 0;
}

void sorting(int *pArray) {
	
	for(int i=0; i<10; i++) {
		for(int j=0; j<9; j++) {
			if(pArray[j] < pArray[j+1]) {
				int temp = pArray[j];
				pArray[j] = pArray[j+1];
				pArray[j+1] = temp;
			}
		}
	}
	
}