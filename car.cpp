#include<bits/stdc++.h>
using namespace std;

class Car {
    public:
        string brand;
        int year;

        Car(const string& brand, const int& year) {  // Constructor
            this->brand = brand;
            this->year = year;
        }

        void display_Info() {
            cout << "Brand: " << this->brand << endl;
            cout << "Year: " << this->year << endl;
        }
};

int main() {
    Car car1("Toyota", 2020);  // Tạo đối tượng Car

    car1.display_Info();  // Hiển thị thông tin của car1

    return 0;
}
