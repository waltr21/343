---
CIS 343 - Structure of Programming Languages

Ira Woodring

***

**The C++ Programming Language**
---
**History**
***

Created by Bjarne Stroustrup.  He started working on it in 1979 calling it "C with Classes".  He found a need for this when programming for his Ph.D. thesis.  Basically, he had found that Simula provided great programming facilities but was too slow, and BCPL was fast but not advanced enough.

In 1983 the name was changed to C++.
---
**Paradigm**
***

C++ allows us to program using the Object Oriented paradigm, but it doesn't impose a restriction that says we *must* use OO.  We could just create imperative procedural code.

This is primarily because C++ is a superset of C; anything legal in C is legal in C++.
---
**Warning!**
***

There are C ways of doing things and C++ ways of doing things.  These conventions, even if they are not expressly stated, are usually assumed by other programmers.

For instance, it is perfectly valid for us to use the <stdio.h> library in C++.  However, this library does not solve problems "the C++ way".  It doesn't use streams for input and output, doesn't have objects, etc.  Using it may compile ok but could add confusion for other programmers (or even for you later on!).
---
**Program Structure**
***

We are going to concentrate on Object Oriented C++.  Therefore we will structure our programs much like Java code we have written in the past.

The difference between Java is that the **Syntactic Unit** for an object's definition (the class) is contained in a single file.  In C++ it *can* be in a single file, but we usually split the class into an interface (\*.h file), and the implementation (\*.cpp file).
---
**Program Structure**
***

For instance, if we were going to create a car object we might have two files:

```Car.h``` which holds the function signatures (the declarations), and ```Car.cpp``` that holds the code (or definitions).
---
**Car.h**

```C++
#include <string>

class Car {

  public:
    // Constructor with no parameters.
    Car();

    // Constructor with parameters.
    Car(std::string make, std::string model, int year, double mileage);

    // Accessors
    std::string getMake();
    std::string getModel();
    int getYear();
    double getMileage();

    // Setters
    void setMake(std::string make);
    void setModel(std::string model);
    int setYear(int year);
    double setMileage(double mileage);

  private:
    std::string make;
    std::string model;
    int year;
    double mileage;

    // Fake function just to illustrate we can have functions
    // that are private too.
    void doNothing();

};    // Notice the semicolon at the end of the declaration!
```
---
**The Namespace Operator**
***

Looking at the previous code you may have noticed the "::" operator between std and string.  This is called the Namespace Operator (or Scope Resolution Operator); it signifies where a function is defined.
---
**The Namespace Operator**
***

In C++ we are allowed to separate code into namespaces.  If we declare a function of data type inside of a namespace it becomes part of that namespace.  That allows us to separate our code into logical groupings.  The "::" operator tells us from which namespace a function is being called.
---
**The Namespace Operator**
***

This also allows us to have functions with the same names, but in different namespaces.  In fact, it is not uncommon for programmers to wish to use the same names for data types of functions.

Notice how we define our functions from the Car.h file in a Car.cpp file.  We have to provide a namespace so the compiler knows specifically which functions we are trying to define:
---
**Car.cpp**

```C++
#include <string>

Car::Car(){
  make = "None";
  model = "None";
  year = 1900;
  mileage = 0.0;
}

Car::Car(std::string make, std::string model, int year, double mileage){
  this->make = make;
  this->model = model;
  this->year = year;
  this->mileage = mileage;
}

std::string getMake(){
  return make;
}

std::string getModel(){
  return model;
}

int getYear(){
  return year;
}

double getMileage(){
  return mileage;
}

void setMake(std::string make){
  this->make = make;
}

void setModel(std::string model){
  this->model = model;
}

void setYear(int year){
  this->year = year;
}

void setMileage(double mileage){
  this->mileage = mileage;
}

void doNothing(){

}
```
---
**Using Objects**
***

C++ uses a similar syntax to Java when creating objects:

```C++
Car a;      // Note that this actually creates the object!
            // Unlike Java in that respect.
Car b("Porsche", "911", 1972, 37228.3);
```
---
**Using Objects**
***

Once we have an object, we call its functions or access its public members just as we do in Java:

```C++
int mile = a.getMileage();
```

---
**Memory Management**
***

Just like in C, C++ manages memory for static (compile time, on the stack) objects only.  Dynamically created memory (run-time, on the heap) must be managed by the programmer.
