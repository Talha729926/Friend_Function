#include <iostream>
using namespace std;

class ClassA;

class ClassB {
private:
    int valueB;
public:
    ClassB(int v) : valueB(v) {}
    friend void showValues(ClassA a, ClassB b); 
};

class ClassA {
private:
    int valueA;
public:
    ClassA(int v) : valueA(v) {}
    friend void showValues(ClassA a, ClassB b); 
};

void showValues(ClassA a, ClassB b) {
    cout << "Value A: " << a.valueA << endl;
    cout << "Value B: " << b.valueB << endl;
}

int main() {
    ClassA a(5);
    ClassB b(10);
    showValues(a, b);
    return 0;
}
