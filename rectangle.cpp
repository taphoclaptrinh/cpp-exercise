#include<bits/stdc++.h>
using namespace std;

class Rectangle {
    public:
        int height;
        int weight;

        Rectangle(const int& height, const int& weight) {
            this->height = height;
            this->weight = weight;
        }

        int calculateArea() {
            return this->height * this->weight;
        }
};

int main() {
    Rectangle rectangle1(5, 10); // Tạo một hình chữ nhật với chiều cao 5 và chiều rộng 10

    cout << "Area: " << rectangle1.calculateArea() << endl; // Tính và in diện tích
    return 0;
}
