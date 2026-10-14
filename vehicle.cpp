#include<iostream>
#include<string>
using namespace std;

class parent {
protected:
    string vehicleNumber;
    string ownerName;
    int hours;

public:
    parent(string v, string o, int h) {
        vehicleNumber = v;
        ownerName = o;
        hours = h;
    }

    void showDetails() {
        cout << "Vehicle Number: " << vehicleNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Hours: " << hours << endl;
    }

    virtual int calculateFee() = 0;
};

class child : public parent {
    string vehicleType;

public:
    child(string v, string o, int h, string type)
        : parent(v, o, h) {
        vehicleType = type;
    }

    int calculateFee() override {
        if (vehicleType == "bike") {
            return hours * 20;
        }
        else if (vehicleType == "car") {
            return hours * 50;
        }
        else if (vehicleType == "truck") {
            return hours * 100;
        }
        else {
            return 0;
        }
    }
};

int main() {
    child bi("UP15AB1234", "Rahul", 3, "bike");
    child ca("UP15CD5678", "Aman", 4, "car");
    child tr("UP15EF9012", "Rohit", 2, "truck");

    bi.showDetails();
    cout << "Parking Fee: " << bi.calculateFee() << endl;

    cout << endl;

    ca.showDetails();
    cout << "Parking Fee: " << ca.calculateFee() << endl;

    cout << endl;

    tr.showDetails();
    cout << "Parking Fee: " << tr.calculateFee() << endl;

    return 0;
}