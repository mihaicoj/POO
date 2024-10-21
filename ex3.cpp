#include <iostream>

class Person {
private:
    std::string name;

public:
    // Constructor cu parametri
    Person(std::string n) {
        name = n;
        std::cout << "Constructor: " << name << " a fost creat." << std::endl;
    }

    // Destructor
    ~Person() {
        std::cout << "Destructor: " << name << " a fost distrus." << std::endl;
    }
};

int main() {
    // Creăm un obiect folosind constructorul cu parametri
    Person person1("Alice");

    // Obiectul este distrus automat la ieșirea din blocul curent (la sfârșitul funcției)
    return 0;
}
