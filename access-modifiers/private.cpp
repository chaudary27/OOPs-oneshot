#include<iostream>
#include<string>
using  namespace std;

class Teacher{
	private:
		double salary;

	public:
		string name;
		string dept;
		string subject;
	
};

int main(){
	Teacher t1;
	t1.name="ali";
	t1.dept="CS";
	t1.subject="PF";
	
	cout<<t1.name<<endl;
	cout<<t1.subject<<endl;
	cout<<t1.dept<<endl;
	
	return 0;
}