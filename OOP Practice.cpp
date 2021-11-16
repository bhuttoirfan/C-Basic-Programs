#include<iostream>
using namespace std;

class Parent {
	private:
		//Data Members
		int a,b,c;
		string name, profession;
		double salary;
		int a;
	
	public:
		// Constructor
		Parent() {
			a=0;
			b=0;
			c=0;
			name = "Kamal";
			profession = "Student";
			salary = NULL;
		}
		
		// Parametrized Constructor
		Parent(int num1, int num2, int num3, string fullName, string prof) {
			a= num1;
			b= num2;
			c= num3;
			name = fullName;
			profession = prof;
			salary = NULL;			
		}
		
		// Method
		void getter() {
			
			cout<<"A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Profession: "<<profession<<endl;
			cout<<"Salary: "<<salary<<endl; 
		}
		
		setter();
		
		// Destructor
		~Parent(){
		}
};

// Method out of the class
int Parent::setter() {
	cout<<"Setter Method";
}

int main() {
	Parent obj, obj2(10,20,30,"Kamal Zafar","Student");
	
	obj.getter();
	
	cout<<endl<<endl<<"Data of object2: "<<endl;
	obj2.getter();
	obj2.setter();
}