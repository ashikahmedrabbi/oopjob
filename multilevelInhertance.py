class Vehicle:
    def vehicle_details(self):
        print("Vehicle details.")

class Car(Vehicle):
    def car_details(self):
        print("Car details.")

class SportsCar(Car):
    def sports_car_details(self):
        print("Sports car details.")

my_sports_car = SportsCar()
my_sports_car.vehicle_details()
my_sports_car.car_details()
my_sports_car.sports_car_details()
