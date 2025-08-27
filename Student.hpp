#pragma once
#include <string>
using namespace std;

class Student {
private:
    string* name;
    int* age;

public:

    Student();
    Student(string n, int a);
    ~Student();


    void setName(string s) const;
    void setAge(int i) const;

    string getName() const;
    int getAge() const;
};
