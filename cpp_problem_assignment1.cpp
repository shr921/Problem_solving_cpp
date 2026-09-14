#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:

    // Constructor
    Student(string n, int a)
    {
        name = n;
        age = a;
        cout << "Constructor called!" << endl;
    }

    // User-defined function
    void display()
    {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }

    // User-defined function
    void introduce()
    {
        cout << name << " is a student." << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called!" << endl;
    }
};

int main()
{
    // Creating object
    Student s1("Shreyash", 19);

    // Calling user-defined functions
    s1.display();
    s1.introduce();

    return 0;
}