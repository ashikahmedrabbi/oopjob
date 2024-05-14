#include <iostream>
#include <string>

using namespace std;

class Brand {
private:
    // Member variables
    string name;
    string color;
    float price;

public:
    // Constructor
    Brand(string n, string c, float p) {
        name = n;
        color = c;
        price = p;
    }

    // Method to display brand details
    void displayDetails() {
        cout << "Brand name: " << name << ", color: " << color << ", price: $" << price << endl;
    }

    // Method to set a discount on the price
    void setDiscount(float discount) {
        if (discount >= 0 && discount <= 100) {
            price = price * ((100 - discount) / 100);
            cout << "Discount applied. New price: $" << price << endl;
        } else {
            cout << "Invalid discount percentage." << endl;
        }
    }

    // Method to change the color
    void changeColor(string newColor) {
        color = newColor;
        cout << "Color changed to " << color << endl;
    }
};

int main() {
    // Creating an object of the Brand class
    Brand myBrand("Nike", "Red", 150.0);

    // Calling methods
    myBrand.displayDetails();
    myBrand.setDiscount(10);
    myBrand.changeColor("Blue");
    myBrand.displayDetails();

    return 0;
}
