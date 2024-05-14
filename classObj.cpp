#include <iostream>
#include <string>

using namespace std;

class Brand {
public:
    
    string name;
    string color;
    int price;

    // Constructor Declearation
    Brand(string x, string y, int z) {
        name = x;
        color = y;
        price = z;
    }

    
    void displayDetails() {
        cout << "Brand Name: " << name << ", color: " << color << ", price: " << price << endl;
    }
};

int main() {
    
    Brand myShirt("T-shirt", "White",200);

   
    myShirt.displayDetails();

    return 0;
}
