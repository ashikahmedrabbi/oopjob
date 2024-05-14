#include <iostream>
#include <string>

using namespace std;

// Base class
class Brand {
public:
    string name;
    string color;
    float price;

    Brand(string n, string c, float p) : name(n), color(c), price(p) {}

    void displayDetails() {
        cout << "Brand name: " << name << ", color: " << color << ", price: $" << price << endl;
    }
};

// Derived class
class Product : public Brand {
public:
    int stock;

    Product(string n, string c, float p, int s) : Brand(n, c, p), stock(s) {}

    void displayStock() {
        cout << "Stock: " << stock << endl;
    }
};

int main() {
    Product myProduct("Nike", "Red", 150.0, 100);
    myProduct.displayDetails();
    myProduct.displayStock();
    return 0;
}
