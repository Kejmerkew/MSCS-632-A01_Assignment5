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
2. Open the image included in the repo inside Pharo
   ```
   RideShare_PharoImage\RideShare.image
   ```
3. Copy the demo code in RideSharingSystem.st into the Pharo IDE playground
4. Run the program by hitting "Do It All"
6. Open the transcript to see the output. If it's blank hit the fetch button.

#### C++

1. Navigate to the `C++` folder in a terminal.  
2. Compile the code:  

   ```bash
   g++ main.cpp -o RideSharingSystem
   ```
3. Run the executable
   
   ```bash
   ./RideSharingSystem
   ```
4. 
