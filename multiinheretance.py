class Engine:
    def engine_details(self):
        print("Engine details.")

class Body:
    def body_details(self):
        print("Body details.")

class Car(Engine, Body):
    def car_details(self):
        print("Car details.")

my_car = Car()
my_car.engine_details()
my_car.body_details()
my_car.car_details()
