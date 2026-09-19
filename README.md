# Car parking 
# My-first-

## Car Parking Management System

This is a simple **C++ Car Parking Management System**. The program keeps track of cars currently parked in a parking area and stores basic information about each car and its owner.

## Features

The program provides the following options:

1. **Car Enter**
   - Adds a new car to the parking area.
   - Takes the owner's name.
   - Takes the car number.
   - Takes the owner's phone number.
   - Takes the entry time.

2. **Car Exit**
   - Searches for a car using its car number.
   - Removes the car from the parking list when it leaves.
   - Shows a message if the car is not found.

3. **Show Parked Cars**
   - Displays the details of all currently parked cars.
   - Shows:
     - Owner name
     - Car number
     - Phone number
     - Entry time

4. **Total Cars**
   - Shows the total number of cars currently inside the parking area.

5. **Exit Program**
   - Closes the program.

## How the Program Works

The program uses a `Car` class to store information about each car.

Each car contains:

- Owner name
- Car number
- Phone number
- Entry time

An array is used to store up to **100 cars**.

The variable `totalCars` keeps track of how many cars are currently parked.

### When a Car Enters

The user selects:

```text
1. Car Enter
