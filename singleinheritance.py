class Vehicle:
    def display(self):
        print("This is a vehicle.")

class Car(Vehicle):
    def show(self):
        print("This is a car.")

my_car = Car()
my_car.display()
my_car.show()
