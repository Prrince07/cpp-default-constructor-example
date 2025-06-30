#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    
    Student() {
        rollNo = 0;
        name = "Unknown";
        cout << "Default constructor called!" << endl;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;      // Default 
    s1.display();

    return 0;
}
