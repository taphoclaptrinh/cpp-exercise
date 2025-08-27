#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;
    string color;

public:
    // Setter cho bán kính
    void setRadius(double r) {
        if (r > 0) {
            radius = r;
        } else {
            cout << "Ban kinh khong hop le! Phai lon hon 0." << endl;
            radius = 0;  // hoặc giữ nguyên, hoặc có thể throw lỗi
        }
    }

    // Setter cho màu sắc
    void setColor(const string& c) {
        if (!c.empty()) {
            color = c;
        } else {
            cout << "Mau sac khong duoc de trong." << endl;
        }
    }

    // Getter cho bán kính
    double getRadius() const {
        return radius;
    }

    // Getter cho màu sắc
    string getColor() const {
        return color;
    }

    // Tính chu vi
    double circumference() const {
        return 2 * M_PI * radius;
    }

    // Tính diện tích
    double area() const {
        return M_PI * pow(radius, 2);
    }

    // Hiển thị màu sắc
    void displayColor() const {
        cout << "Mau sac hinh tron: " << color << endl;
    }

    // Kiểm tra bán kính hợp lệ
    bool isValidRadius() const {
        return radius > 0;
    }
};

int main() {
    double radius;
    string color;

    cout << "Nhap ban kinh hinh tron: ";
    cin >> radius;
    cout << "Nhap mau sac hinh tron: ";
    cin >> color;

    Circle circle1;

    // Dùng setter để gán giá trị
    circle1.setRadius(radius);
    circle1.setColor(color);

    if (circle1.isValidRadius()) {
        cout << fixed << setprecision(2);
        cout << "Chu vi hinh tron: " << circle1.circumference() << " don vi" << endl;
        cout << "Dien tich hinh tron: " << circle1.area() << " don vi vuong" << endl;
        circle1.displayColor();
    } else {
        cout << "Khong the tinh toan vi ban kinh khong hop le." << endl;
    }

    return 0;
}
