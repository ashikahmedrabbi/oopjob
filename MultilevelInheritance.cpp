#include <iostream>
#include <string>

using namespace std;

// Base class
class Brand {
public:
    string name;

    Brand(string n) : name(n) {}
};

// Derived class
class Product : public Brand {
public:
    string color;

    Product(string n, string c) : Brand(n), color(c) {}
};

// Further derived class
class Store : public Product {
public:
    float price;

    Store(string n, string c, float p) : Product(n, c), price(p) {}

    void displayDetails() {
        cout << "Brand name: " << name << ", color: " << color << ", price: $" << price << endl;
    }
};

int main() {
    Store myStore("Nike", "Red", 150.0);
    myStore.displayDetails();
    return 0;
}
