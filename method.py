class Brand:
    # Constructor
    def __init__(self, name, color, price):
        self.name = name
        self.color = color
        self.price = price

    # Method to display brand details
    def display_details(self):
        print(f"Brand name: {self.name}, color: {self.color}, price: ${self.price}")

    # Method to set a discount on the price
    def set_discount(self, discount):
        if 0 <= discount <= 100:
            self.price = self.price * ((100 - discount) / 100)
            print(f"Discount applied. New price: ${self.price}")
        else:
            print("Invalid discount percentage.")

    # Method to change the color
    def change_color(self, new_color):
        self.color = new_color
        print(f"Color changed to {self.color}")

# Creating an object of the Brand class
my_brand = Brand("Nike", "Red", 150.0)

# Calling methods
my_brand.display_details()
my_brand.set_discount(10)
my_brand.change_color("Blue")
my_brand.display_details()
