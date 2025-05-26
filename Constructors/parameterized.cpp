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

	
};

int main(){
	Teacher t1("ali","CS","PF",25000);
	t1.getinfo();

	
	
	return 0;
}