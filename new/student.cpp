#include <iostream>
#include <string>
#include "student.h"
using namespace std;

void Student::set(int a, string b, char c, int d)
{
    number = a;
    name = b;
    sex = c;
    age = d;
}

void Student::show()
{
    cout << "学号: " << number << endl;
    cout << "姓名: " << name << endl;
    cout << "性别: " << sex << endl;
    cout << "年龄: " << age << endl;
}

int main()
{
    Student s1;
    s1.set(20210001, "张三", 'm', 20);
    s1.show();
    return 0;
}