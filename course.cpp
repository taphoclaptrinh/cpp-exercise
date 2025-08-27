#include <iostream>
#include <string>
using namespace std;

class Course {
private:
    string courseName;
    string courseCode;
    int credits;
    string instructorName;

public:
    // Setters
    void setCourseName(const string& name) {
        courseName = name;
    }

    void setCourseCode(const string& code) {
        courseCode = code;
    }

    void setCredits(int c) {
        if (c > 0)
            credits = c;
        else
            cout << "Invalid number of credits!" << endl;
    }

    void setInstructorName(const string& name) {
        instructorName = name;
    }

    // Getters
    string getCourseName() const {
        return courseName;
    }

    string getCourseCode() const {
        return courseCode;
    }

    int getCredits() const {
        return credits;
    }

    string getInstructorName() const {
        return instructorName;
    }

    // Hiển thị thông tin khoá học
    void displayInfo() const {
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Credits: " << credits << endl;
        cout << "Instructor: " << instructorName << endl;
    }

    // Kiểm tra số tín chỉ lớn
    bool isHighCredit() const {
        return credits > 3;
    }

    // Kiểm tra có cần lab không
    bool isLabRequired() const {
        return credits > 4;
    }
};

int main() {
    Course course1;

    // Gán thông tin thông qua setter
    course1.setCourseName("Object Oriented Programming");
    course1.setCourseCode("CS202");
    course1.setCredits(4);
    course1.setInstructorName("Dr. Smith");

    // Hiển thị thông tin khóa học
    course1.displayInfo();

    // Kiểm tra số tín chỉ và lab
    if (course1.isHighCredit()) {
        cout << "This is a high credit course." << endl;
    } else {
        cout << "This is not a high credit course." << endl;
    }

    if (course1.isLabRequired()) {
        cout << "This course requires a lab." << endl;
    } else {
        cout << "This course does not require a lab." << endl;
    }

    return 0;
}
