#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
    string brand;
    string model;
    int ram;
    int storage;
    string gpu;

public:
    // Setters
    void setBrand(const string& b) {
        brand = b;
    }

    void setModel(const string& m) {
        model = m;
    }

    void setRam(int r) {
        if (r >= 0)
            ram = r;
        else
            cout << "Invalid RAM size!" << endl;
    }

    void setStorage(int s) {
        if (s >= 0)
            storage = s;
        else
            cout << "Invalid storage size!" << endl;
    }

    void setGpu(const string& g) {
        gpu = g;
    }

    // Getters
    string getBrand() const {
        return brand;
    }

    string getModel() const {
        return model;
    }

    int getRam() const {
        return ram;
    }

    int getStorage() const {
        return storage;
    }

    string getGpu() const {
        return gpu;
    }

    // Hiển thị thông tin laptop
    void displayInfo() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "GPU: " << gpu << endl;
    }

    // Kiểm tra RAM có đủ để chạy phần mềm yêu cầu không
    void checkRAM(int requiredRAM) const {
        if (ram >= requiredRAM) {
            cout << "This laptop has enough RAM to run the software." << endl;
        } else {
            cout << "This laptop does not have enough RAM to run the software." << endl;
        }
    }

    // Kiểm tra GPU có đủ mạnh để chơi game không
    void checkGPU() const {
        if (gpu.find("RTX") != string::npos || gpu.find("GTX") != string::npos || gpu.find("Radeon") != string::npos) {
            cout << "This laptop is strong enough to play games!" << endl;
        } else {
            cout << "This laptop is not strong enough to play games!" << endl;
        }
    }

    // Nâng cấp RAM
    void upgradeRAM(int additionalRAM) {
        if (additionalRAM > 0) {
            ram += additionalRAM;
            cout << "RAM upgraded to: " << ram << " GB" << endl;
        } else {
            cout << "Invalid RAM upgrade amount!" << endl;
        }
    }
};

int main() {
    Laptop laptop1;

    laptop1.setBrand("Dell");
    laptop1.setModel("XPS 13");
    laptop1.setRam(8);
    laptop1.setStorage(256);
    laptop1.setGpu("NVIDIA GTX 1660");

    laptop1.displayInfo();

    laptop1.checkRAM(16);
    laptop1.checkGPU();

    laptop1.upgradeRAM(8);

    return 0;
}
