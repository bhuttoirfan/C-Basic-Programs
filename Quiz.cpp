#include<iostream>
using namespace std;

void func1();
void func2();

void func1(){
	cout<<"Func 1"<<endl;
	func2();
}

void func2(){
	cout<<"Func 2"<<endl;
}

int main() {
	func1();
	
	int arr[10],n;
	cin>>n;
	
	int *array = new int(n);
	array[0] = 10;
	
	cout<<array[0];
}