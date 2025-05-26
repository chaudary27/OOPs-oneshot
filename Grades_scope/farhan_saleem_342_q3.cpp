#include <string>
using namespace std;

class Student{
protected:
    string name;
    int rollNumber;
public:
    Student(string n,int r):name(n),rollNumber(r){}};

class UniversityStudent : public Student {
private:
    int marks1, marks2, marks3, marks4, marks5;
public:
    UniversityStudent(string n, int r, int m1, int m2, int m3, int m4, int m5): Student(n, r),marks1(m1),marks2(m2),marks3(m3),marks4(m4),marks5(m5){}
    int calculateTotal() {
        return marks1 + marks2 + marks3 + marks4 + marks5;
    }
    double calculateAverage() {
        return calculateTotal() / 5.0;
    }
    char calculateGrade() {
        double avg = calculateAverage();
        if (avg >= 80) return 'A';
        if (avg >= 70) return 'B';
        if (avg >= 60) return 'C';
        return 'D';
    }
};

class Operator{
public:
    int isEqual(UniversityStudent u1, UniversityStudent u2) {
        int total1 = u1.calculateTotal();
        int total2 = u2.calculateTotal();
        if (total1 == total2) return 0;
        else if (total1 > total2) return 1;
        else return -1;
    }
};
