#include<iostream>
using namespace std;

int main() {
	int arr[3][4] = {
		{1, 17, 23, 6},
		{0, 0,  0,  0},
		{0, 0,  0,  0}
	};
	
	for(int i=0; i<3; i++) {
		
		for(int j=0; j<4; j++) {
			
			if(j != 3){
				
				arr[i+1][j] = arr[i][j]	+ arr[i][j+1];	
			}else {
				arr[i+1][j] = arr[i][j]	+ arr[i][j-1];
			}
				
		}
	}
	
	for(int i=0; i<3; i++) {
		
		for(int j=0; j<4; j++) {
			cout<<arr[i][j]<<"\t";		
		}
		cout<<endl;
	}
}