#include<iostream>
using namespace std;

int main() {
	
	int arr[5], arr2[100];
	int *p0,*p1,*p2,*p3,*p4;
	
	cout<<"the name of the array is: "<<arr<<"\t"<<arr2;
	
	p0 = &arr[0];
	p1 = &arr[1];
	p2 = &arr[2];
	p3 = &arr[3];
	p4 = &arr[4];
	
	cout<<endl<<endl;
	cout<<"the address of array and its sequence: "<<"\t"<<arr<<"\t"<<p0<<"\t"<<p1<<"\t"<<p2<<"\t"<<p3<<"\t"<<p4;	
}