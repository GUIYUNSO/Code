#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        int number;
        string name;
        char sex;
        int age;
    public:
    void set(int a, string b, char c, int d);
    void show();
};