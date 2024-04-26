#include <iostream>

class DB; // Forward declaration for friend function

class DM {
private:
    int meters;
    int centimeters;

public:
    DM(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}

    void display() 
	{
        std::cout << "Distance in meters: " << meters << " meters " << centimeters << " centimeters" << std::endl;
    }

    // Friend function to add DM and DB objects
    friend DM addDistances(DM dm, DB db);
};

class DB {
private:
    int feet;
    int inches;

public:
    DB(int ft = 0, int in = 0) : feet(ft), inches(in) {}

    void display() {
        std::cout << "Distance in feet: " << feet << " feet " << inches << " inches" << std::endl;
    }

    // Friend function to add DM and DB objects
    friend DM addDistances(DM dm, DB db);
};

// Friend function definition
DM addDistances(DM dm, DB db) {
    int totalMeters = dm.meters + static_cast<int>(db.feet * 0.3048); // Convert feet to meters
    int totalCentimeters = dm.centimeters + static_cast<int>(db.inches * 2.54); // Convert inches to centimeters

    // Adjust for overflow
    if (totalCentimeters >= 100) {
        totalMeters += totalCentimeters / 100;
        totalCentimeters %= 100;
    }

    return DM(totalMeters, totalCentimeters);
}

int main() {
    // Example usage
    DM dmObj(5, 60); // 5 meters 60 centimeters
    DB dbObj(16, 6); // 16 feet 6 inches

    DM result = addDistances(dmObj, dbObj);

    std::cout << "Sum of distances:" << std::endl;
    dmObj.display();
    dbObj.display();
    result.display();

    return 0;
}