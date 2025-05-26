#include <iostream>
#include <vector>
using namespace std;

// Base class
class Person {
protected:
    string name, email;
public:
    Person(string name, string email) : name(name), email(email) {}

    virtual void showProfile() const {
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
    }

    virtual ~Person() {}
};

// Derived class: Student
class Student : public Person {
private:
    string rollNo, gpa, degree;
public:
    Student(string name, string email, string rollNo, string gpa, string degree)
        : Person(name, email), rollNo(rollNo), gpa(gpa), degree(degree) {}

    void showProfile() const override {
        Person::showProfile();
        cout << "Roll Number: " << rollNo << endl;
        cout << "GPA: " << gpa << endl;
        cout << "Degree: " << degree << endl;
    }
};

// Derived class: Faculty
class Faculty : public Person {
private:
    string designation, department;
public:
    Faculty(string name, string email, string designation, string department)
        : Person(name, email), designation(designation), department(department) {}

    void showProfile() const override {
        Person::showProfile();
        cout << "Designation: " << designation << endl;
        cout << "Department: " << department << endl;
    }
};

// University class
class University {
private:
    vector<Person*> people;
public:
    void addPerson(Person* p) {
        people.push_back(p);
    }

    void displayAll() const {
        cout << "---- University Profiles ----" << endl;
        for (const auto& p : people) {
            p->showProfile();
            cout << "-----------------------------" << endl;
        }
    }

    ~University() {
        for (auto& p : people) delete p;
    }
};

// Main
int main() {
    University uni;

    uni.addPerson(new Faculty("Dr. Hassan", "prof@uni.pk", "Associate Professor", "Computer Science"));
    uni.addPerson(new Student("Mehwish Anil", "student@uni.pk", "21-CS-94", "3.9", "BSCS"));

    uni.displayAll();

    return 0;
}