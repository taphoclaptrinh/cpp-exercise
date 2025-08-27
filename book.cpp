#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    // Setter cho title
    void setTitle(const string& t) {
        if (!t.empty()) {
            title = t;
        } else {
            cout << "Title cannot be empty." << endl;
        }
    }

    // Setter cho author
    void setAuthor(const string& a) {
        if (!a.empty()) {
            author = a;
        } else {
            cout << "Author cannot be empty." << endl;
        }
    }

    // Getter cho title
    string getTitle() const {
        return title;
    }

    // Getter cho author
    string getAuthor() const {
        return author;
    }

    // Hàm hiển thị thông tin sách
    void displayInfo() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book book1;

    // Gán giá trị thông qua setter
    book1.setTitle("C++ Programming");
    book1.setAuthor("Bjarne Stroustrup");

    // Hiển thị thông tin sách
    book1.displayInfo();

    return 0;
}
