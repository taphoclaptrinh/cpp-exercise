#include<bits/stdc++.h>
using namespace std;

class Employee {
    public:
        string name;
        double salary;

        Employee(const string& name, const double& salary) {//constructor 
            this->name = name;
            this->salary = salary;
        }

        void display_Info() {
            cout << "Name: " << this->name << endl;
            cout << "Salary: " << this->salary << endl;
        }
};

int main() {
    Employee employee1("Alice", 50000);
    
    employee1.display_Info();
    return 0;
}
