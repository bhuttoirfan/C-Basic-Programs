#include<iostream>
using namespace std;

int main() {
	
	int arrOne[3] = {3  ,4  ,2};
	
	int arrTwo[3][4] = {
		{1  ,2  ,3  ,3},
		{2  ,7  ,2  ,2},
		{9  ,2  ,3  ,3}
	}, total;
	
	
	
	int mulOfArray[4];
	
	for(int i=0; i<=3; i++) {
		
		for (int j=0; j<3; j++) {
			
			total  += (arrOne[j] * arrTwo[j][i]);
		}
	
		mulOfArray[i] = total;
		total = 0;
	}
	
	for(int i=0; i<4; i++) {
		
		cout<<mulOfArray[i]<<"\t";
	}
}