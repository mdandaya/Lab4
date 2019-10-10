//
// Created by MDand on 2019-10-09.
//


#include <ostream>

#ifndef LAB4_ANIMAL_HPP
#define LAB4_ANIMAL_HPP

#endif //LAB4_ANIMAL_HPP

using namespace std;

class Animal {

private:


public:

    int age;
    static int long id;
    bool alive;
    double location[2];

    // Constructors
    Animal();
    Animal(int age, double xcoord, double ycoord);

    // Move
    virtual void move(double xcoord, double ycoord);

    // Copy constructor
    Animal(const Animal& a);

    // Virtual Destructor
    virtual ~Animal();

    // Sleep and eat
    virtual void sleep();
    virtual void eat();

    void setAlive(bool alive);

    // Overloaded insertion operator
    friend ostream& operator<<(ostream& os, const Animal& animal);



};