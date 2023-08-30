// Write a program that uses `std::sort` to sort a vector of custom objects
// based on a specific attribute.
#include <bits/stdc++.h>
using namespace std;

class Student {
    int rollNo;
    string name, dept;

   public:
    Student(int rno, string name, string dept) {
        this->rollNo = rno;
        this->name = name;
        this->dept = dept;
    }
    void getData() { cout << rollNo << " " << name << " " << dept << endl; }
    friend bool comparator(Student, Student);
};
bool comparator(Student p, Student q) { return p.rollNo < q.rollNo; }

int main() {
    Student s1 = Student(1, "Ankit", "Computer");
    Student s2 = Student(2, "Bahubali", "Computer");
    Student s3 = Student(3, "Chetan", "Computer");
    vector<Student> students = {s2, s3, s1};

    for (auto it : students) {
        it.getData();
    }
    // sort students based on rollNo
    cout << endl;
    sort(students.begin(), students.end(), &comparator);
    for (auto it : students) {
        it.getData();
    }
    return 0;
}