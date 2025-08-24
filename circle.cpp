#include<bits/stdc++.h>
using namespace std;


class Circle {
    public:
        double radius;
        string color;

        // Constructor
        Circle(const double& radius, const string& color){
            this->radius = radius;
            this->color = color;
        }

        // Kiểm tra bán kính hợp lệ (bán kính phải là số dương)
        bool isValidRadius() {
            return this->radius > 0;
        }

        // Tính chu vi
        double circumference() {
            return 2 * M_PI * this->radius;
        }

        // Tính diện tích
        double area() {
            return M_PI * pow(this->radius, 2);
        }

        // Hiển thị màu sắc của hình tròn
        void displayColor() {
            cout << "Mau sac hinh tron: " << this->color << endl;
        }
};

int main() {
    double radius;
    string color;

    cout << "Nhap ban kinh hinh tron: ";
    cin >> radius;
    cout << "Nhap mau sac hinh tron: ";
    cin >> color;

    // Tạo đối tượng hình tròn với bán kính và màu sắc nhập từ người dùng
    Circle circle1(radius, color);

    // Kiểm tra bán kính hợp lệ
    if (circle1.isValidRadius()) {
        // In ra chu vi, diện tích và màu sắc của hình tròn
        cout << "Chu vi hinh tron: " << fixed << setprecision(2) << circle1.circumference() << " don vi" << endl;//lam tron sau dau phay 2 don vi
        cout << "Dien tich hinh tron: " << fixed << setprecision(2) << circle1.area() << " don vi vuong" << endl;
        circle1.displayColor();
    } else {
        cout << "Ban kinh khong hop le! Ban kinh phai la so duong." << endl;
    }

    return 0;
}