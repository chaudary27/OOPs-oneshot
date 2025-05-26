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
		
	Teacher(){
		dept="CSS";
	}
		
	// setter
	void set_salary(double new_salary){
		salary=new_salary;
	}
	
	// getter
	double get_salary(){
		return 	salary;
	}
	
};

int main(){
	Teacher t1;
	t1.name="ali";
	t1.subject="PF";
	t1.set_salary(25000);
	
	cout<<t1.name<<endl;
	cout<<t1.subject<<endl;
	cout<<t1.dept<<endl;
	cout<<t1.get_salary();
	
	return 0;
}