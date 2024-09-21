#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}
    friend int calculateArea(Rectangle r);
};

int calculateArea(Rectangle r) {
    return r.width * r.height; 
}

int main() {
    Rectangle r(5, 10);
    cout << "Area: " << calculateArea(r) << endl; 
    return 0;
}
