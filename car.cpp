#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    // Setter cho brand
    void setBrand(const string& b) {
        if (!b.empty()) {
            brand = b;
        } else {
            cout << "Brand cannot be empty." << endl;
        }
    }

    // Setter cho year
    void setYear(int y) {
        if (y > 1885 && y <= 2025) {  // Xe hơi đầu tiên xuất hiện khoảng 1886
            year = y;
        } else {
            cout << "Invalid year." << endl;
        }
    }

    // Getter cho brand
    string getBrand() const {
        return brand;
    }

    // Getter cho year
    int getYear() const {
        return year;
    }

    // Hiển thị thông tin xe
    void displayInfo() const {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car car1;

    // Gán thông tin thông qua setter
    car1.setBrand("Toyota");
    car1.setYear(2020);

    // Hiển thị thông tin
    car1.displayInfo();

    return 0;
}
