#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ==================== Ride Classes ====================
class Ride {
protected:
    string rideID;
    string pickupLocation;
    string dropoffLocation;
    double distance;
public:
    Ride(string id, string pickup, string dropoff, double dist)
        : rideID(id), pickupLocation(pickup), dropoffLocation(dropoff), distance(dist) {}
    virtual double calculateFare() { return distance * 1.0; }
    virtual void rideDetails() {
        cout << "Ride ID: " << rideID 
             << ", Pickup: " << pickupLocation 
             << ", Dropoff: " << dropoffLocation 
             << ", Distance: " << distance 
             << ", Fare: $" << calculateFare() << endl;
    }
    virtual ~Ride() {}  // Virtual destructor
};

class StandardRide : public Ride {
public:
    StandardRide(string id, string pickup, string dropoff, double dist)
        : Ride(id, pickup, dropoff, dist) {}
    double calculateFare() override { return distance * 1.0; }
};

class PremiumRide : public Ride {
public:
    PremiumRide(string id, string pickup, string dropoff, double dist)
        : Ride(id, pickup, dropoff, dist) {}
    double calculateFare() override { return distance * 2.0; }
};

// ==================== Driver Class ====================
class Driver {
private:
    string driverID;
    string name;
    double rating;
    vector<Ride*> assignedRides;
public:
    Driver(string id, string n, double r) : driverID(id), name(n), rating(r) {}
    void addRide(Ride* ride) { assignedRides.push_back(ride); }
    void getDriverInfo() {
        cout << endl << "Driver: " << name << ", Rating: " << rating << endl;
        cout << "Assigned Rides:" << endl;
        for (auto r : assignedRides) r->rideDetails();
        cout << endl;
    }
};

// ==================== Rider Class ====================
class Rider {
private:
    string riderID;
    string name;
    vector<Ride*> requestedRides;
public:
    Rider(string id, string n) : riderID(id), name(n) {}
    void requestRide(Ride* ride) { requestedRides.push_back(ride); }
    void viewRides() {
        cout << "Rides for " << name << ":" << endl;
        for (auto r : requestedRides) r->rideDetails();
        cout << endl;
    }
};

// ==================== Main Program ====================
int main() {
    // Create rides
    Ride* r1 = new StandardRide("R1", "Downtown", "Airport", 12);
    Ride* r2 = new PremiumRide("R2", "Mall", "Hotel", 8);
    Ride* r3 = new StandardRide("R3", "Home", "University", 5);

    // Polymorphic list of rides
    vector<Ride*> rides = {r1, r2, r3};

    cout << "All Rides:" << endl;
    for (auto ride : rides) ride->rideDetails();

    // Create drivers
    Driver d1("D1", "Alice", 4.8);
    Driver d2("D2", "Bob", 4.5);

    // Assign rides
    d1.addRide(r1);
    d1.addRide(r3);
    d2.addRide(r2);

    // Display driver info
    d1.getDriverInfo();
    d2.getDriverInfo();

    // Create riders
    Rider rider1("U1", "John");
    Rider rider2("U2", "Emma");

    rider1.requestRide(r1);
    rider1.requestRide(r2);
    rider2.requestRide(r3);

    // View rider ride history
    rider1.viewRides();
    rider2.viewRides();

    // Cleanup
    for (auto ride : rides) delete ride;

    return 0;
}
