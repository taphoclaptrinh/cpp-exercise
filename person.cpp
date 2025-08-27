#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string address;
    string phoneNumber;

public:
    // Setter
    void setName(const string& n) {
        if (!n.empty())
            name = n;
    }

    void setAge(int a) {
        if (a >= 0)
            age = a;
    }

    void setAddress(const string& addr) {
        address = addr;
    }

    void setPhoneNumber(const string& phone) {
        phoneNumber = phone;
    }

    // Getter
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    string getAddress() const {
        return address;
    }

    string getPhoneNumber() const {
        return phoneNumber;
    }

    // Hiển thị thông tin
    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNumber << endl;
    }

    // Kiểm tra người trưởng thành
    bool isAdult() const {
        return age >= 18;
    }

    // Thay đổi địa chỉ
    void move(const string& newAddress) {
        address = newAddress;
        cout << "Address updated to: " << address << endl;
    }

    // Phương thức chào hỏi
    void greet() const {
        cout << "Hello, my name is " << name << "." << endl;
    }
};

int main() {
    Person person1;
    person1.setName("John Doe");
    person1.setAge(20);
    person1.setAddress("123 Main St");
    person1.setPhoneNumber("123-456-7890");

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
