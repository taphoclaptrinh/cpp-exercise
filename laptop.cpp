#include <bits/stdc++.h>
using namespace std;

class Laptop {
public:
    string brand;
    string model;
    int ram;
    int storage;
    string gpu;

    // Hiển thị thông tin laptop
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "GPU: " << gpu << endl;
    }

    // Kiểm tra RAM có đủ để chạy phần mềm yêu cầu không
    void checkRAM(int requiredRAM) {
        if (ram >= requiredRAM) {
            cout << "This laptop has enough RAM to run the software." << endl;
        } else {
            cout << "This laptop does not have enough RAM to run the software." << endl;
        }
    }

    // Kiểm tra GPU có đủ mạnh để chơi game không
    void checkGPU() {
        if (gpu.find("RTX") != string::npos || gpu.find("GTX") != string::npos || gpu.find("Radeon") != string::npos) {
            cout << "This laptop is strong enough to play games!" << endl;
        } else {
            cout << "This laptop is not strong enough to play games!" << endl;
        }
    }

    // Nâng cấp RAM
    void upgradeRAM(int additionalRAM) {
        ram += additionalRAM;
        cout << "RAM upgraded to: " << ram << " GB" << endl;
    }
};

int main() {
    Laptop laptop1;
    
    laptop1.brand = "Dell";
    laptop1.model = "XPS 13";
    laptop1.ram = 8;
    laptop1.storage = 256;
    laptop1.gpu = "NVIDIA GTX 1660";

    // Hiển thị thông tin laptop
    laptop1.displayInfo();

    // Kiểm tra xem laptop có đủ RAM để chạy phần mềm yêu cầu 16GB không
    laptop1.checkRAM(16);

    // Kiểm tra GPU xem có đủ mạnh để chơi game không
    laptop1.checkGPU();

    // Nâng cấp RAM thêm 8GB
    laptop1.upgradeRAM(8);

    return 0;
}