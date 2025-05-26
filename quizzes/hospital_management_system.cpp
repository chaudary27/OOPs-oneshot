#include <iostream>
#include <vector>
using namespace std;

// Base class
class Person {
protected:
    string name, cnic, age;
public:
    Person(string name, string cnic, string age) 
        : name(name), cnic(cnic), age(age) {}

    virtual void display() const {
        cout << "Name: " << name << endl;
        cout << "CNIC: " << cnic << endl;
        cout << "Age: " << age << endl;
    }

    virtual ~Person() {}
};

// Derived class: Doctor
class Doctor : public Person {
private:
    string specialization;
    int fee;
public:
    Doctor(string name, string cnic, string age, string specialization, int fee)
        : Person(name, cnic, age), specialization(specialization), fee(fee) {}

    void display() const override {
        Person::display();
        cout << "Specialization: " << specialization << endl;
        cout << "Fee: " << fee << endl;
    }
};

// Derived class: Patient
class Patient : public Person {
private:
    string disease, admitted;
public:
    Patient(string name, string cnic, string age, string disease, string admitted)
        : Person(name, cnic, age), disease(disease), admitted(admitted) {}

    void display() const override {
        Person::display();
        cout << "Disease: " << disease << endl;
        cout << "Admitted: " << admitted << endl;
    }
};

// Hospital class
class Hospital {
private:
    vector<Person*> persons;
public:
    void addPerson(Person* p) {
        persons.push_back(p);
    }

    void showAll() const {
        cout << "Dept: Staff, Patients" << endl;
        for (const auto& p : persons) {
            p->display();
            cout << "-----------------------------" << endl;
        }
    }

    ~Hospital() {
        for (auto& p : persons) delete p;
    }
};

// Main function
int main() {
    Hospital h;
    h.addPerson(new Doctor("Dr. Sarah Khan", "35201-1234567-0", "40", "Radiologist", 3000));
    h.addPerson(new Patient("Ahmed Raza", "35201-4563217-9", "25", "Dengue", "Yes"));

    h.showAll();

    return 0;
}