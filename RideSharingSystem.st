| r1 r2 r3 driver1 driver2 rider1 rides |

"Create rides"
r1 := StandardRide new initializeWithID: 101 pickup: '10th St' dropoff: 'Main Ave' distance: 4.2.
r2 := PremiumRide new initializeWithID: 102 pickup: 'Park Blvd' dropoff: 'Central' distance: 7.5.
r3 := StandardRide new initializeWithID: 103 pickup: 'Union Sq' dropoff: 'Elm St' distance: 2.0.

rides := { r1. r2. r3 }.

"Show all rides (polymorphism)"
Transcript show: '=== All Rides (polymorphic) ==='; cr.
rides do: [:each | Transcript show: (each rideDetails); cr ].

"Create drivers"
driver1 := Driver new initializeWithID: 1 name: 'Alice Smith' rating: 4.9.
driver1 addRide: r1; addRide: r3.
Transcript show: driver1 getDriverInfo; cr.
driver1 listRides.

driver2 := Driver new initializeWithID: 2 name: 'Bob Jones' rating: 4.7.
driver2 addRide: r2.
Transcript show: driver2 getDriverInfo; cr.
driver2 listRides.

"Create rider"
rider1 := Rider new initializeWithID: 201 name: 'Carol White'.
rider1 requestRide: r2.
rider1 requestRide: r3.
Transcript show: rider1 getRiderInfo; cr.
rider1 viewRides.
