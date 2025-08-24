#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        float grade;

        Student(const string& name, const float& grade) {  // Constructor
            this->name = name;
            this->grade = grade;
        }

        void display_Info() {
            cout << "Name: " << this->name << endl;
            cout << "Grade: " << this->grade << endl;
        }
};

int main() {
    Student student1("John", 8.5);  // Tạo đối tượng Student

    student1.display_Info();  // Hiển thị thông tin của student1

    return 0;
}
