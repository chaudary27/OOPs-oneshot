#include<iostream>
#include<string>
using  namespace std;

class Teacher{
	public:
		string name;
		string dept;
		string subject;
		double salary;
	
};

int main(){
	Teacher t1;
	t1.name="ali";
	t1.dept="CS";
	t1.salary=20000;
	t1.subject="PF";
	
	cout<<t1.name<<endl;
	cout<<t1.subject<<endl;
	cout<<t1.dept<<endl;
	cout<<t1.salary<<endl;
	
	return 0;
}