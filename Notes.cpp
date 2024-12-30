// #include<iostream>
// using namespace std;

// class Student {
// private:
//     string name; //data member
//     int age; //data member

// public:
//     void setDetails(string n, int a) { //member function:setdetails, displaydetails
//         name = n; //john
//         age = a; //20
//     }

//     void displayDetails() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main() {
//     Student s1; //object:s1
//     s1.setDetails("John", 20);
//     s1.displayDetails();
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Car {
// private:
//     string brand; //dm
//     int year; //dm

// public:
//     void setDetails(string b, int y) { //mf:setDetails, showDetails
//         brand = b;
//         year = y;
//     }

//     void showDetails() {
//         cout << "Brand: " << brand << ", Year: " << year << endl;
//     }
// };

// int main() {
//     Car car1; //object
//     car1.setDetails("Toyota", 2020);
//     car1.showDetails();
//     return 0;
// }

//Constructors
// #include <iostream>
// using namespace std;

// class Example {
// public:
//     int x;

//     // Default Constructor
//     Example() {
//         x = 0;  // Default initialization
//         cout << "Default Constructor called!" << endl;
//     }

//     void display() {
//         cout << "x = " << x << endl;
//     }
// };

// int main() {
//     Example obj; // Default constructor invoked
//     obj.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Example {
// public:
//     int x;

//     // Parameterized Constructor
//     Example(int value) {
//         x = value; // Initializing x with a given value
//         cout << "Parameterized Constructor called!" << endl;
//     }

//     void display() {
//         cout << "x = " << x << endl;
//     }
// };

// int main() {
//     Example obj(100); // Passing value to the constructor
//     obj.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Example {
// public:
//     int x;

//     // Parameterized Constructor
//     Example(int value) {
//         x = value;
//     }

//     // Copy Constructor
//     Example(const Example &obj) { 
//         x = obj.x; // Copy value of x
//         cout << "Copy Constructor called!" << endl;
//     }

//     void display() {
//         cout << "x = " << x << endl;
//     }
// };

// int main() {
//     Example obj1(200); // Parameterized constructor
//     Example obj2 = obj1; // Copy constructor invoked

//     obj1.display();
//     obj2.display();
//     return 0;
// }


 //Encapsulation
//  #include<iostream>
// using namespace std;

// class Account {
// private:
//     int balance;

// public:
//     void setBalance(int b) {
//         if (b >= 0) balance = b;
//         else cout << "Invalid balance!" << endl;
//     }

//     int getBalance() {
//         return balance;
//     }
// };

// int main() {
//     Account acc;
//     acc.setBalance(1000);
//     cout << "Balance: " << acc.getBalance() << endl;
//     return 0;
// // }
// #include <iostream>
// #include <string>
// using namespace std;

// // Encapsulation Example
// class Employee {
// private:
//     // Private data members (hidden from outside)
//     string name;
//     int age;
//     double salary;

// public:
//     // Public methods to access and modify private members

//     // Setter for Name
//     void setName(string n) {
//         name = n;
//     }

//     // Getter for Name
//     string getName() {
//         return name;
//     }

//     // Setter for Age
//     void setAge(int a) {
//         if (a > 18) // Validating age
//             age = a;
//         else
//             cout << "Age must be greater than 18!" << endl;
//     }

//     // Getter for Age
//     int getAge() {
//         return age;
//     }

//     // Setter for Salary
//     void setSalary(double s) {
//         if (s > 0) // Validating salary
//             salary = s;
//         else
//             cout << "Salary must be positive!" << endl;
//     }

//     // Getter for Salary
//     double getSalary() {
//         return salary;
//     }

//     // Display employee details
//     void displayInfo() {
//         cout << "Name: " << name << ", Age: " << age << ", Salary: $" << salary << endl;
//     }
// };

// int main() {
//     Employee emp;

//     // Setting values using setters
//     emp.setName("John Doe");
//     emp.setAge(25);
//     emp.setSalary(50000);

//     // Display employee info
//     emp.displayInfo();

//     // Accessing values using getters
//     cout << "Employee Name: " << emp.getName() << endl;
//     cout << "Employee Age: " << emp.getAge() << endl;
//     cout << "Employee Salary: $" << emp.getSalary() << endl;

//     return 0;
// }
// #include<iostream>
// using namespace std;

// class Employee {
// private:
//     string name;
//     int salary;

// public:
//     void setDetails(string n, int s) {
//         name = n;
//         salary = s;
//     }

//     void showDetails() {
//         cout << "Name: " << name << ", Salary: " << salary << endl;
//     }
// };

// int main() {
//     Employee emp;
//     emp.setDetails("Alice", 50000);
//     emp.showDetails();
//     return 0;
// }


//inheritance:single inheritance
// #include<iostream>
// using namespace std;

// class Animal {
// public:
//     void eat() {
//         cout << "Eating..." << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "Barking..." << endl;
//     }
// };

// int main() {
//     Dog d;
//     d.eat();
//     d.bark();
//     return 0;
// }

// //multiple inheritance
// #include<iostream>
// using namespace std;

// class A {
// public:
//     void displayA() {
//         cout << "Class A" << endl;
//     }
// };
// class B {
// public:
//     void displayB() {
//         cout << "Class B" << endl;
//     }
// };
// class C : public A, public B {
// public:
//     void displayC() {
//         cout << "Class C" << endl;
//     }
// };
// int main() {
//     C obj;
//     obj.displayA();
//     obj.displayB();
//     obj.displayC();
//     return 0;
// }
//multilevel inheritance
// #include<iostream>
// using namespace std;

// class Animal {
// public:
//     void eat() {
//         cout << "Eating..." << endl;
//     }
// };

// class Mammal : public Animal {
// public:
//     void walk() {
//         cout << "Walking..." << endl;
//     }
// };

// class Dog : public Mammal {
// public:
//     void bark() {
//         cout << "Barking..." << endl;
//     }
// };

// int main() {
//     Dog d;
//     d.eat();
//     d.walk();
//     d.bark();
//     return 0;
// }

//hierarchical inheritance
// #include<iostream>
// using namespace std;

// class Animal {
// public:
//     void eat() {
//         cout << "Eating..." << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "Barking..." << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void meow() {
//         cout << "Meowing..." << endl;
//     }
// };

// int main() {
//     Dog d;
//     d.eat();
//     d.bark();

//     Cat c;
//     c.eat();
//     c.meow();
//     return 0;
// }

//virtual function
// #include <iostream>
// using namespace std;

// // Base class
// class Animal {
// public:
//     virtual void sound() {  // Virtual function
//         cout << "Animal makes a sound." << endl;
//     }
// };

// // Derived class 1
// class Dog : public Animal {
// public:
//     void sound() override {  // Function overriding
//         cout << "Dog barks." << endl;
//     }
// };

// // Derived class 2
// class Cat : public Animal {
// public:
//     void sound() override {
//         cout << "Cat meows." << endl;
//     }
// };

// int main() {
//     Animal *a;  // Pointer to base class
//     Dog d;
//     Cat c;

//     a = &d;
//     a->sound(); // Calls Dog's sound() due to virtual function

//     a = &c;
//     a->sound(); // Calls Cat's sound() due to virtual function

//     return 0;
// }


//operator overloading
// #include <iostream>
// using namespace std;

// class Complex {
// private:
//     int real, imag;

// public:
//     Complex(int r = 0, int i = 0) {
//         real = r;
//         imag = i;
//     }

//     // Overloading the + operator
//     Complex operator+(const Complex &obj) {
//         Complex temp;
//         temp.real = real + obj.real;
//         temp.imag = imag + obj.imag;
//         return temp;
//     }

//     void display() {
//         cout << real << " + " << imag << "i" << endl;
//     }
// };

// int main() {
//     Complex c1(3, 4), c2(1, 2);
//     Complex c3 = c1 + c2; // Calls the overloaded operator
//     c3.display();         // Output: 4 + 6i

//     return 0;
// }

//function Overloading
#include <iostream>
using namespace std;

class FunctionOverloading {
public:
    // Function with one argument
    void display(int x) {
        cout << "Integer: " << x << endl;
    }

    // Function with two arguments
    void display(double y) {
        cout << "Double: " << y << endl;
    }

    // Function with three arguments
    void display(string z) {
        cout << "String: " << z << endl;
    }
};

int main() {
    FunctionOverloading obj;

    obj.display(10);       // Calls the first function
    obj.display(5.5);      // Calls the second function
    obj.display("Hello");  // Calls the third function

    return 0;
}

