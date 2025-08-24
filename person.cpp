#include<bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    int age;
    string address;
    string phoneNumber;

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNumber << endl; // Hiển thị số điện thoại
    }

    bool isAdult() {
        return age >= 18;
    }

    // Phương thức thay đổi địa chỉ
    void move(string newAddress) {
        address = newAddress;
        cout << "Address updated to: " << address << endl;
    }

    // Phương thức chào hỏi
    void greet() {
        cout << "Hello, my name is " << name << "." << endl;
    }
};

int main() {
    Person person1;
    person1.name = "John Doe";
    person1.age = 20;
    person1.address = "123 Main St";
    person1.phoneNumber = "123-456-7890";

    person1.displayInfo();
    person1.greet();

    // Thay đổi địa chỉ
    person1.move("456 Elm St");

    if (person1.isAdult()) {
        cout << "This person is an adult." << endl;
    } else {
        cout << "This person is not an adult." << endl;
    }

    return 0;
}
