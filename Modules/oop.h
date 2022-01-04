class MyClass {       // The class
    public:             // Access specifier
        int myNum;        // Attribute (int variable)
        std::string myString;  // Attribute (string variable)

        //init
        MyClass(std::string description) {
            myString = description;
        }

        //methods
        std::string say(){
            return myString;
        }

        int getSalary(){
            salary = myNum * 3;
            return salary;
        }
    private:
        int salary;
};

void createMyClass(){
    MyClass obj("hello world!");

    obj.myNum = 10;

    std::cout << obj.getSalary();
}

// Inheritance
// Base class
class Vehicle {
    public:
        string brand = "Ford";
        void honk() {
            cout << "Tuut, tuut! \n" ;
        }
};

// Derived class
class Car: public Vehicle {
    public:
        string model = "Mustang";
};

// Poli
// Base class
class Animal {
    public:
        void animalSound() {
        cout << "The animal makes a sound \n" ;
    }
};

// Derived class
class Pig : public Animal {
    public:
        void animalSound() {
        cout << "The pig says: wee wee \n" ;
    }
};

// Derived class
class Dog : public Animal {
    public:
        void animalSound() {
        cout << "The dog says: bow wow \n" ;
    }
};
