#include<iostream>
using namespace std;

int main() {
	int arr[3][3] = {
		{1  ,2  ,3},
		{2  ,7  ,2},
		{9  ,2  ,3},
	}, sum=0;
	
	for(int i=0; i<3; i++) {
		
		for (int j=0; j<3; j++) {
			
			if(i==1 && j==1) {
				
				sum += arr[i][j];	
			}
			
			if(i==1 || j==1) {
				
				cout<<arr[i][j]<<"\t";
				sum += arr[i][j];	
			}else {
				
				cout<<"\t";
			}
		}
		cout<<endl;
	}
	
	cout<<endl<<"sum: "<<sum;
}