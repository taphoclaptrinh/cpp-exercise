#include<bits/stdc++.h>
using namespace std;

class Book {
    public:
        string title;  // Tên sách
        string author;  // Tên tác giả

        Book(const string& title, const string& author) {  // Constructor
            this->title = title;
            this->author = author;
        }

        void display_Info() {  // Hàm hiển thị thông tin sách
            cout << "Title: " << this->title << endl;
            cout << "Author: " << this->author << endl;
        }
};

int main() {
    Book book1("C++ Programming", "Bjarne Stroustrup");  // Tạo đối tượng Book

    book1.display_Info();  // Hiển thị thông tin sách

    return 0;
}
