#include <iostream>
#include <vector>
using namespace std;

// Base class
class Vehicle {
protected:
    string vehicleNumber;
    string model;
    string company;

    // Protected constructor
    Vehicle(string vehicleNumber, string model, string company)
        : vehicleNumber(vehicleNumber), model(model), company(company) {}

public:
    virtual void registerVehicle() = 0; // Pure virtual function
    virtual ~Vehicle() {}
};

// Derived class Car
class Car : public Vehicle {
private:
    int seatingCapacity;
    string fuelType;

public:
    Car(string vehicleNumber, string model, string company,
        int seatingCapacity, string fuelType)
        : Vehicle(vehicleNumber, model, company),
          seatingCapacity(seatingCapacity), fuelType(fuelType) {}

    void registerVehicle() override {
        cout << "Vehicle Number: " << vehicleNumber << endl;
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Type: Car" << endl;
        cout << "Fuel: " << fuelType << endl;
        cout << "Seating: " << seatingCapacity << endl << endl;
    }
};

// Derived class Bike
class Bike : public Vehicle {
private:
    int engineCC;
    string type;

public:
    Bike(string vehicleNumber, string model, string company,
         int engineCC, string type)
        : Vehicle(vehicleNumber, model, company),
          engineCC(engineCC), type(type) {}

    void registerVehicle() override {
        cout << "Vehicle Number: " << vehicleNumber << endl;
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Type: Bike" << endl;
        cout << "Engine: " << engineCC << "CC" << endl;
        cout << "Style: " << type << endl << endl;
    }
};

// Registry class
class Registry {
private:
    vector<Vehicle*> vehicles;

public:
    void store(Vehicle* v) {
        vehicles.push_back(v);
    }

    void print() {
        cout << "--- Vehicle Registry ---" << endl;
        for (Vehicle* v : vehicles) {
            v->registerVehicle(); // Polymorphic call
        }
    }

    ~Registry() {
        for (Vehicle* v : vehicles) {
            delete v;
        }
    }
};

// Main function
int main() {
    Registry registry;

    Vehicle* bike = new Bike("LEB-2023-1234", "2022", "Honda", 150, "Sports");
    Vehicle* car = new Car("LEA-2022-0908", "2023", "Toyota", 5, "Petrol");

    registry.store(bike);
    registry.store(car);

    registry.print();

    return 0;
}