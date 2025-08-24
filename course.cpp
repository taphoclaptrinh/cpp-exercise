#include<bits/stdc++.h>
using namespace std;

class Course {
public:
    string courseName;
    string courseCode;
    int credits;
    string instructorName; 

    void displayInfo() {
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Credits: " << credits << endl;
        cout << "Instructor: " << instructorName << endl; // Hiển thị tên giảng viên
    }

    bool isHighCredit() {
        return credits > 3;
    }

    bool isLabRequired() {
        return credits > 4; // Nếu tín chỉ lớn hơn 4 thì yêu cầu phòng thí nghiệm
    }
};

int main() {
    Course course1;
    course1.courseName = "Object Oriented Programming";
    course1.courseCode = "CS202";
    course1.credits = 4;
    course1.instructorName = "Dr. Smith";

    course1.displayInfo();
    
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
