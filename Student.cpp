#include "Student.hpp"
#include <iostream>
#include <string>

using namespace std;

Student::Student() : name(new string("")), age(new int(0)) {
    cout << "Student object created!" << endl;
}

Student::Student(string n, int a) : name(new string(n)), age(new int(a)) {
    cout << "Student object created!" << endl;
}

Student::~Student() {
    delete name;
    delete age;
    cout << "Student object destroyed!" << endl;
}

void Student::setName(string s) const {
    *name = s;
}

void Student::setAge(int i) const {
    *age = i;
}

string Student::getName() const {
    return *name;
}

int Student::getAge() const {
    return *age;
}
