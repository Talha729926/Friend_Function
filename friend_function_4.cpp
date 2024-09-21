#include <iostream>
using namespace std;

class Base {
private:
    int baseData;
public:
    Base(int d) : baseData(d) {}
    friend void showData(Base b); 
};

class Derived : public Base {
public:
    Derived(int d) : Base(d) {}
};

void showData(Base b) {
    cout << "Base Data: " << b.baseData << endl; 
}

int main() {
    Derived d(100);
    showData(d); 
    return 0;
}
