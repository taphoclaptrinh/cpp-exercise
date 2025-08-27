#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float grade;

public:
    // Setter
    void setName(const string& n) {
        if (!n.empty())
            name = n;
        else
            cout << "Name cannot be empty." << endl;
    }

    void setGrade(float g) {
        if (g >= 0.0f && g <= 10.0f)
            grade = g;
        else
            cout << "Grade must be between 0 and 10." << endl;
    }

    // Getter
    string getName() const {
        return name;
    }

    float getGrade() const {
        return grade;
    }

    // Hiển thị thông tin
    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student student1;
    student1.setName("John");
    student1.setGrade(8.5f);

    student1.displayInfo();

    return 0;
}
