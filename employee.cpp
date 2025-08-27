#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    // Setter cho name
    void setName(const string& n) {
        if (!n.empty()) {
            name = n;
        } else {
            cout << "Name cannot be empty." << endl;
        }
    }

    // Setter cho salary
    void setSalary(double s) {
        if (s >= 0) {
            salary = s;
        } else {
            cout << "Salary must be non-negative." << endl;
        }
    }

    // Getter cho name
    string getName() const {
        return name;
    }

    // Getter cho salary
    double getSalary() const {
        return salary;
    }

    // Hiển thị thông tin nhân viên
    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee employee1;

    // Gán giá trị thông qua setter
    employee1.setName("Alice");
    employee1.setSalary(50000);

    // Hiển thị thông tin
    employee1.displayInfo();

    return 0;
}
