#include <iostream>
#include <string>

using namespace std;

class Brand
{
public:
    string name;

    Brand(string n) : name(n) {}
};

class Product
{
public:
    string color;

    Product(string c) : color(c) {}
};

class Price : public Brand
{
public:
    float price;

    Price(string n, float p) : Brand(n), price(p) {}
};

class Store : public Price, public Product
{
public:
    Store(string n, string c, float p) : Price(n, p), Product(c) {}

    void displayDetails()
    {
        cout << "Brand name: " << name << ", color: " << color << ", price: $" << price << endl;
    }
};

int main()
{
    Store myStore("Nike", "Red", 150.0);
    myStore.displayDetails();
    return 0;
}
