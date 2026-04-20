#include <iostream>
using namespace std;

// Base Class
class Student {
protected:
    string name;
    int rollNumber;

public:
    void setData(string n, int r) {
        name = n;
        rollNumber = r;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Derived Class
class GraduateStudent : public Student {
private:
    string researchArea;

public:
    void setResearchArea(string area) {
        researchArea = area;
    }

    void displayResearchArea() {
        cout << "Research Area: " << researchArea << endl;
    }
};

int main() {
    GraduateStudent gs;

    gs.setData("Ali", 101);
    gs.setResearchArea("Artificial Intelligence");

    gs.displayData();
    gs.displayResearchArea();

    return 0;
}
