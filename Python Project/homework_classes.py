
class Vehicle:
  # constructor
  def __init__(self):
    self.needs_maintenance=False
    self.trips_since_maintenance=0
  #setter make
  def set_make(self,make):
    self.make= make
  #setter model
  def set_model(self,model):
    self.model= model
  #setter year
  def set_year(self,year):
    self.year= year
  #setter weight
  def set_weight(self,weight):
    self.weight= weight

# Cars class which inherit the Vehicle
class Cars(Vehicle):
# constructor
  def __init(self):
    self.is_driving =False

# start funciton to start the car
  def drive(self):
    self.is_driving=True

# stop method to stop the car immediately
  def stop(self):
    self.is_driving=False
    self.trips_since_maintenance+=1
    if self.trips_since_maintenance>100:
      self.needs_maintenance=True

# repair to start the servicing 
  def repair(self):
    self.trips_since_maintenance = 0
    self.needs_maintenance = False

# Planes class which inherit the Vehicle Class
class Planes(Vehicle):
# constructor
  def __init(self):
    self.is_flying =False

# flying funciton to start the plane
  def flying(self):
    if self.needs_maintenance==True:
      print("plane can't fly until it's repaired.")
      return False
    self.is_flying=True

# landing method to stop the plane 
  def landing(self):
    self.is_flying=False
    self.trips_since_maintenance+=1
    if self.trips_since_maintenance>100:
      self.needs_maintenance=True

# repair function to start the servicing 
  def repair(self):
    self.trips_since_maintenance = 0
    self.needs_maintenance = False


def print_details(obj):
  print("*"*12)
  for i,j in obj.__dict__.items():
    print(f"{i} -> {j}")
  print("*"*12)
  print()

car1 = Cars()
car1.set_make("Skoda")
car1.set_model("Octavia")
car1.set_weight(1403)
car1.set_year(2021)
# driving and stoping n number of times
for i in range(20):
  car1.drive()
  car1.stop()
car2 = Cars()
car2.set_make("Mercedes")
car2.set_model("benz")
car2.set_weight(2070)
car2.set_year(1963)
# driving and stoping n number of times
for i in range(70):
  car2.drive()
  car2.stop()
car3 = Cars()
car3.set_make("Maruti")
car3.set_model("Swift")
car3.set_weight(2000)
car3.set_year(2005)
# driving and stoping n number of times
for i in range(101):
  car3.drive()
  car3.stop()

print_details(car1)
print_details(car2)
print_details(car3)

# REPAIRING THE CAR
car3.repair()
print("After the repairing")
print_details(car3)


# extra credit
plane1 = Planes()
plane1.set_make("Jet")
plane1.set_model("A144")
plane1.set_weight(4356)
plane1.set_year(2017)

# flying and landing n number of times
for i in range(102):
  plane1.flying()
  plane1.landing()
print_details(plane1)




# output
'''
************
needs_maintenance -> False
trips_since_maintenance -> 20
make -> Skoda
model -> Octavia
weight -> 1403
year -> 2021
is_driving -> False
************

************
needs_maintenance -> False
trips_since_maintenance -> 70
make -> Mercedes
model -> benz
weight -> 2070
year -> 1963
is_driving -> False
************

************
needs_maintenance -> True
trips_since_maintenance -> 101
make -> Maruti
model -> Swift
weight -> 2000
year -> 2005
is_driving -> False
************

After the repairing
************
needs_maintenance -> False
trips_since_maintenance -> 0
make -> Maruti
model -> Swift
weight -> 2000
year -> 2005
is_driving -> False
************

plane can't fly until it's repaired.
************
needs_maintenance -> True
trips_since_maintenance -> 102
make -> Jet
model -> A144
weight -> 4356
year -> 2017
is_flying -> False
************
'''

