#include<iostream>
using namespace std;

int main( ) {
	/*
	for writing variables:
		Camel Case   --> firstHighest, secondHighest
		
		Pascal Case  --> Firsthighest, Secondhighest
		
		Snake Case   --> first_highest, second_highest
	*/
	
	/*
	
	home work:
	
	ask user to insert his/her name or any word
	1 --> find the vowels in the name or word
	2 --> remove the vowels from the name or word 

	char charArray[20];
	
	cin>>charArray => Hasnain;
	
	1 -> cout<<vowel-> a,a,i;
	
	2 -> cout<<Hsnin;
	
	*/
	
	
	int arr[10] = {1,2,3,4,5,8,6,7,4,12};
	int firstHighest, secondHighest, thirdHighest;
	
	for(int i=0; i<10; i++) {
		
		if(arr[i] > firstHighest){
			
			thirdHighest = secondHighest;
			secondHighest = firstHighest;
			firstHighest = arr[i];
		
		}else if(arr[i] > secondHighest ){
			
			thirdHighest = secondHighest;
			secondHighest = arr[i];
		
		}else if(arr[i] > thirdHighest) {
		
			thirdHighest = arr[i];
		
		}
		
		
		
	}
	
	cout<<endl<<firstHighest<<"\t"<<secondHighest<<"\t"<<thirdHighest;
	
}