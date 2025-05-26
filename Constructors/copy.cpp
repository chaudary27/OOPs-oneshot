#include<iostream>
#include<string>
using  namespace std;

class Teacher{
	
	private:
		string name;
		string dept;
		string subject;
		double salary;
	public:
		
	Teacher(string n,string d,string sub,double sal){
		name = n;
		dept = d;
		subject= sub;
		salary= sal;
	}
	void getinfo(){
		cout<<name<<endl;
		cout<<dept<<endl;
		cout<<subject<<endl;
		cout<<salary<<endl;

	}
	// pass by refrence
	Teacher(Teacher &obj){
		cout<<"a copy constructor"<<endl;
		name=obj.name;
		dept=obj.dept;
		salary=obj.salary;
		subject=obj.subject;
		
	}

	
};

int main(){
	Teacher t1("ali","CS","PF",25000);
	t1.getinfo();
	Teacher t2(t1);
	t2.getinfo();

	
	
	return 0;
}