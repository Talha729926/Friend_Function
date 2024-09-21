#include <iostream>
using namespace std;

class ClassX {
private:
    int valueX;
public:
    ClassX(int v) : valueX(v) {}
    friend void displayValues(ClassX x, class ClassY y); 
};

class ClassY {
private:
    int valueY;
public:
    ClassY(int v) : valueY(v) {}
    friend void displayValues(ClassX x, ClassY y); 
};

void displayValues(ClassX x, ClassY y) {
    cout << "Value X: " << x.valueX << endl;
    cout << "Value Y: " << y.valueY << endl;
}

int main() {
    ClassX x(20);
    ClassY y(30);
    displayValues(x, y); 
    return 0;
}
