#include <iostream>
using namespace std;

class Rectangle {
private:
    int height;
    int width;

public:
    // Constructor
    Rectangle(int h, int w) {
        if (h > 0) height = h; else height = 0;
        if (w > 0) width = w; else width = 0;
    }

    // Setter
    void setHeight(int h) {
        if (h > 0) height = h;
    }

    void setWidth(int w) {
        if (w > 0) width = w;
    }

    // Getter
    int getHeight() const {
        return height;
    }

    int getWidth() const {
        return width;
    }

    // Tính diện tích
    int calculateArea() const {
        return height * width;
    }
};

int main() {
    Rectangle rectangle1(5, 10);

    cout << "Area: " << rectangle1.calculateArea() << endl;

    return 0;
}
