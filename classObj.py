class Brand:
    
    def __init__(self, name, color, price):
        self.name = name
        self.color = color
        self.price = price

   
    def display_details(self):
        print(f"Brand name: {self.name}, color: {self.color}, price: {self.price}")


myShirt = Brand("T-shirt", "Red", 200)


myShirt.display_details()
