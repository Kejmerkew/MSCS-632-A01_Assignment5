# Ride Sharing System: Implementation in Smalltalk and C++

## Overview

This repository contains a **Ride Sharing System** implemented in **Smalltalk (Pharo)** and **C++**, demonstrating core **object-oriented programming (OOP)** principles:

- **Encapsulation:** Data is hidden in instance variables and accessed through methods.  
- **Inheritance:** Subclasses reuse and extend base class functionality.  
- **Polymorphism:** Methods behave differently depending on the object type.  

The system models **rides, drivers, and riders** and allows dynamic **fare calculation** for standard and premium rides.

---

## Running the Code

### Requirements

* Smalltalk (Pharo) 10+ for the Smalltalk implementation
* C++ compiler (GCC, Clang, or MSVC) for the C++ implementation

### Steps

#### Smalltalk (Pharo)

1. Install [Pharo](https://pharo.org/).  
2. Open the Pharo image in the Smalltalk environment.  
3. Load the `RideSharingSystem` package.  
4. Run the system from the System Browser. You can create rides, assign drivers, and calculate fares dynamically.

#### C++

1. Navigate to the `C++` folder in a terminal.  
2. Compile the code:  

   ```bash
   g++ main.cpp -o RideSharingSystem
