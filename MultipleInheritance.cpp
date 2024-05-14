#include <iostream>
#include <string>

using namespace std;

// Base class 1
class Brand {
public:
    string name;

    Brand(string n) : name(n) {}
};

// Base class 2
class Product {
public:
    string color;
    float price;

    Product(string c, float p) : color(c), price(p) {}
};

// Derived class
class Store : public Brand, public Product {
public:
    Store(string n, string c, float p) : Brand(n), Product(c, p) {}

    void displayDetails() {
        cout << "Brand name: " << name << ", color: " << color << ", price: $" << price << endl;
    }
};

int main() {
    Store myStore("Nike", "Red", 150.0);
    myStore.displayDetails();
    return 0;
}
