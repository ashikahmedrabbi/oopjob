#include <iostream>
#include <string>

using namespace std;

// Base class
class Brand {
public:
    string name;

    Brand(string n) : name(n) {}
};

// Derived class 1
class Product : public Brand {
public:
    string color;

    Product(string n, string c) : Brand(n), color(c) {}

    void displayProductDetails() {
        cout << "Brand name: " << name << ", color: " << color << endl;
    }
};

// Derived class 2
class Price : public Brand {
public:
    float price;

    Price(string n, float p) : Brand(n), price(p) {}

    void displayPriceDetails() {
        cout << "Brand name: " << name << ", price: $" << price << endl;
    }
};

int main() {
    Product myProduct("Nike", "Red");
    myProduct.displayProductDetails();

    Price myPrice("Nike", 150.0);
    myPrice.displayPriceDetails();

    return 0;
}
