#include <iostream>
using namespace std;

class Animal
{
public:
    void eat() { cout << "Eating...\n"; }
};
class Dog : public Animal
{
public:
    void bark() { cout << "Barking...\n"; }
};
class BabyDog : public Dog
{
public:
    void weep() { cout << "Weeping...\n"; }
};
class Engine
{
public:
    void start() { cout << "Engine started!\n"; }
};
class Car : public Animal, public Engine
{
public:
    void drive() { cout << "Driving...\n"; }
};
class Cat : public Animal
{
public:
    void meow() { cout << "Meowing...\n"; }
};

int main()
{
    cout << "--- Demonstrating Inheritance Types ---\n";
    Dog d;
    cout << "\nSingle Inheritance:\n";
    d.eat();
    d.bark();
    BabyDog bd;
    cout << "\nMultilevel Inheritance:\n";
    bd.eat();
    bd.bark();
    bd.weep();
    Car c;
    cout << "\nMultiple Inheritance:\n";
    c.eat();
    c.start();
    c.drive();
    Cat cat;
    cout << "\nHierarchical Inheritance:\n";
    cat.eat();
    cat.meow();
    return 0;
}