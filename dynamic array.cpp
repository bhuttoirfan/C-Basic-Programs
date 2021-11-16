#include<iostream>
using namespace std;
int main() {

	//int *arr = new int(100);
	
	int arr[3] = {2,3,4};
	
	int *p0,*p1,*p2;
	
	p0 = &arr[0];
	p1 = &arr[1];
	p2 = &arr[2];
	
	cout<<arr[0]<<"\t"<<p0<<"\t"<<arr<<endl;
	cout<<arr[1]<<"\t"<<p1<<"\t"<<&arr+4<<endl;
	cout<<arr[2]<<"\t"<<p2<<"\t"<<&arr+8<<endl;
	
	//cout<<*(arr * 4);
	
	
	
	
	delete [] arr;
	
	
	
	return 0;
}