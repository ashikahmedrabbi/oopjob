class Engine:
    def engine_details(self):
        print("Engine details.")

class Body:
    def body_details(self):
        print("Body details.")

class Vehicle(Engine, Body):
    def vehicle_details(self):
        print("Vehicle details.")

class Car(Vehicle):
    def car_details(self):
        print("Car details.")

my_car = Car()
my_car.engine_details()
my_car.body_details()
my_car.vehicle_details()
my_car.car_details()
