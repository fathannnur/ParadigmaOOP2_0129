#include <iostream>
using namespace std;

class baseClass final{
public:
    virtual void perkenalan() {
        cout << "Halo saya Function dari base class";
    }
};
class baseClass1 {
public:
    virtual void perkenalan() {
        cout << "Halo saya Function dari base class ";
    }
};
class derivedClass : public baseClass {
public:
    void perkenalan() {
        cout << "Halo saya Function dari derived Class";
    }
};